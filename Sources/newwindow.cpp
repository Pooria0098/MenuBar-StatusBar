#include "newwindow.h"
#include "ui_newwindow.h"

NewWindow::NewWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NewWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->plainTextEdit);
}

NewWindow::~NewWindow()
{
    delete ui;
}
