#ifndef DIALOG_NEW_H
#define DIALOG_NEW_H

#include <QDialog>

namespace Ui {
class Dialog_new;
}

class Dialog_new : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_new(QWidget *parent = 0);
    ~Dialog_new();

private:
    Ui::Dialog_new *ui;
};

#endif // DIALOG_NEW_H
