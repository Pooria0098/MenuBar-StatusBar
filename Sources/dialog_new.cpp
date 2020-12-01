#include "dialog_new.h"
#include "ui_dialog_new.h"

Dialog_new::Dialog_new(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_new)
{
    ui->setupUi(this);
}

Dialog_new::~Dialog_new()
{
    delete ui;
}
