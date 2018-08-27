#ifndef DIALOGYESNOCANCEL_H
#define DIALOGYESNOCANCEL_H

#include <QDialog>
#include <QAbstractButton>
#include <QPushButton>
#include <QDialogButtonBox>

namespace Ui {
class DialogYesNoCancel;
}

class DialogYesNoCancel : public QDialog
{
    Q_OBJECT

public:
    explicit DialogYesNoCancel(QWidget *parent = 0);
    ~DialogYesNoCancel();
    void setLabelText(QString txt);

private slots:
  //  void on_buttonBox_clicked(QAbstractButton *button);
    void cancel();

private:
    Ui::DialogYesNoCancel *ui;

signals:
    void canceled();


};

#endif // DIALOGYESNOCANCEL_H
