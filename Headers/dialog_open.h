#ifndef DIALOG_OPEN_H
#define DIALOG_OPEN_H

#include <QDialog>

namespace Ui {
class Dialog_open;
}

class Dialog_open : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_open(QWidget *parent = 0);
    ~Dialog_open();

private:
    Ui::Dialog_open *ui;
};

#endif // DIALOG_OPEN_H
