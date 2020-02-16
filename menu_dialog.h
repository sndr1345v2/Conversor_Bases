#ifndef MENU_DIALOG_H
#define MENU_DIALOG_H
#include <qdebug.h>
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class menu_dialog; }
QT_END_NAMESPACE

class menu_dialog : public QDialog
{
    Q_OBJECT

public:
    menu_dialog(QWidget *parent = nullptr);
    ~menu_dialog();

private slots:
    void on_pushButton_clicked();

signals:
      void sendInput(QString,QString,QString);

private:
    Ui::menu_dialog *ui;
};
#endif // MENU_DIALOG_H
