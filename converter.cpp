#include "converter.h"
#include <QMessageBox>
#include <cmath>

Converter::Converter(QObject *parent) : QObject(parent)
{
    menu = new menu_dialog();

    QObject::connect(menu, SIGNAL(sendInput(QString,QString,QString)),this, SLOT(validateInput(QString,QString,QString)));

}


void Converter::start()
{
    menu -> exec();
}

//Second place functions
int Converter::BaseBtoDecimal(char input){

    if( input>='0' && input <= '9'){
        return int(input - '0');
        //More tan 9 for a base
    }
    else{
        //input = tolower(input);
        return (int) (input - 'a') + 10;
    }
    // Example: input = 'b', so 'b' in ASCII is  98 (decimal), and 'a' is 97, so ('b'-'a') = 1 + 10 = 11
    
}


//Second place functions
char Converter::decimalToBaseB(int input)
{
    if (input >= 0 && input <= 9) {
       return ('0'+input);
        //Example: If input= '10', then -> = 10;

    } else {
        
        return (char) ('a' + (input - 10));
        //Example: If input is above 9, then 'a'= 97 + (11-10 = 1) = 98 = 'b'
    }
}

int Converter::toDecimal(QString input, int base){

    int length = input.length();
    int decimal = 0;

    for (int placeValue = 0, index = length - 1; index >= 0; placeValue++, index--) {

        decimal = decimal + BaseBtoDecimal(input.toLatin1().at(index)) * (int) (pow(base, placeValue));
    }

    return decimal;

}


//Out put the value
QString Converter::toBaseB(int input , int base){

    QString result = "";
    while (input > 0) {

        int remainder = input % base;//Modular
        input = input / base;

        result = decimalToBaseB(remainder) + result;
    }
    return result;
    
}





void Converter::validateInput(QString inputA, QString A, QString B)
{


    int inputBase = A.toInt();
    qDebug()<<"Input base:  "<<inputBase;

    QString inputNumber = inputA;
    qDebug()<<"Input number:  "<<inputNumber;

    int outputBase = B.toInt();
    qDebug()<<"Output base: "<<outputBase;


    int decimal = toDecimal(inputNumber, inputBase);
    QString output = toBaseB(decimal, outputBase);


    qDebug()<<"Result = " << output;






}
