#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QProgressBar>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionOpen_triggered();

    void on_actionNew_triggered();

    void on_actionExit_triggered();

    void on_actionCloseAll_triggered();

    void on_actionFlush_triggered();

    void on_actionNewWindow_triggered();

    void on_actionRefresh_triggered();

private:
    Ui::MainWindow *ui;
    QLabel *mylabel;
    QLabel *ql;
    QProgressBar *pq;
};

#endif // MAINWINDOW_H
