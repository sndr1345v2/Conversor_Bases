#include "menu_dialog.h"
#include "ui_menu_dialog.h"


menu_dialog::menu_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::menu_dialog)
{

    ui->setupUi(this);
    ui->SalidaB->setReadOnly(true);

    QStringList opciones;

    for (int i=2; i<31;i++){
      opciones.append(QString::number(i));
    }

    ui->comboBoxBaseA->addItems(opciones);
    ui->comboBoxBaseB->addItems(opciones);






}

menu_dialog::~menu_dialog()
{
    delete ui;
}


void menu_dialog::on_pushButton_clicked(){

    sendInput(ui->EntradaA->text(),ui->comboBoxBaseA->currentText(),ui->comboBoxBaseB->currentText());
    //QChar::
}
