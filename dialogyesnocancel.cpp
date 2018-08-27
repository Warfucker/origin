#include "dialogyesnocancel.h"
#include "ui_dialogyesnocancel.h"

DialogYesNoCancel::DialogYesNoCancel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogYesNoCancel)
{
    ui->setupUi(this);
    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(accept()));
    connect(ui->buttonBox, SIGNAL(rejected()), this, SLOT(reject()));

    connect(ui->buttonBox->button(QDialogButtonBox::Cancel), SIGNAL(clicked()), SLOT(cancel()));
}

DialogYesNoCancel::~DialogYesNoCancel()
{
    delete ui;
}

void DialogYesNoCancel::setLabelText(QString txt)
{
    ui->label->setText(txt);
}

void DialogYesNoCancel::cancel()
{
    setResult(2);
    this->close();
}
/*
void DialogYesNoCancel::on_buttonBox_clicked(QAbstractButton *button)
{
    if(button == ui->buttonBox->button(QDialogButtonBox::Cancel))
    {
        emit canceled();
    }
}*/
