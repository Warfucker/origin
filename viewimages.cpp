#include "viewimages.h"
#include "ui_viewimages.h"

ViewImages::ViewImages(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ViewImages)
{
    ui->setupUi(this);

    connect(ui->labelPict, SIGNAL(doubleClicked()), this, SIGNAL(doubleClicked()));
    connect(ui->labelPict, SIGNAL(rightClicked()),  this, SIGNAL(rightClicked()));
}

ViewImages::~ViewImages()
{
    delete ui;
}

void ViewImages::on_pushButtonPrev_clicked()
{
    emit prevClicked();
}

void ViewImages::on_pushButtonNext_clicked()
{
    emit nextClicked();
}

void ViewImages::showImage(QImage img, int curNum, int maxNum)
{
    ui->labelNum->setText(QString::number(curNum) + "/" + QString::number(maxNum));
    ui->labelPict->setImg(img);
}

bool ViewImages::isFocused()
{
    if (focusWidget() == ui->labelPict)
        return 1;
    return 0;
}






