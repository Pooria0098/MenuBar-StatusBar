#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog_open.h"
#include "dialog_new.h"
#include "newwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QLabel>
#include <QProgressBar>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mylabel = new QLabel;
    mylabel->setText("<b>Welcome to <big>Qt<big> creator...</b>");
    ui->statusBar->addWidget(mylabel);

    ql= new QLabel;
    ui->statusBar->addPermanentWidget(ql);
    pq = new QProgressBar;
    ui->statusBar->addPermanentWidget(pq);
    //select line up or line down
    //ui->statusBar->addPermanentWidget(pq,1);
    ql->setText("Loading...");
    //pq->setTextVisible(false);
    pq->setValue(50);
    connect(ui->verticalSlider,SIGNAL(valueChanged(int)),pq,SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_triggered()
{
     Dialog_open *dio = new Dialog_open;
     dio->show();
}

void MainWindow::on_actionNew_triggered()
{
    Dialog_new *din = new Dialog_new;
    din->show();
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::exit();
}

void MainWindow::on_actionCloseAll_triggered()
{
    QApplication::closeAllWindows();
}

void MainWindow::on_actionFlush_triggered()
{
    QApplication::flush();
}

void MainWindow::on_actionNewWindow_triggered()
{
    NewWindow *nw = new NewWindow;
    nw->show();
}

void MainWindow::on_actionRefresh_triggered()
{
    ui->statusBar->showMessage("Refresh...",2000);
    pq->setValue(0);
}
