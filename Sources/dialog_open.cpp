#include "dialog_open.h"
#include "ui_dialog_open.h"

Dialog_open::Dialog_open(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_open)
{
    ui->setupUi(this);
}

Dialog_open::~Dialog_open()
{
    delete ui;
}
