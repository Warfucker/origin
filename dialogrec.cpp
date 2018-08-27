#include "dialogrec.h"
#include "ui_dialogrec.h"

DialogRec::DialogRec(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogRec)
{
    ui->setupUi(this);

    curImg = -1;

    connect(ui->labelPictFocus, SIGNAL(doubleClicked()), this, SLOT(addImage()));
    setFixedSize(size());
    ui->labelPictFocus->mn = 1;
}

DialogRec::~DialogRec()
{
    delete ui;
}

void DialogRec::on_pushButtonIngrAdd_clicked()
{

}

void DialogRec::on_pushButtonActAdd_clicked()
{

}

void DialogRec::on_listWidgetIngrs_currentRowChanged(int currentRow)
{

}

void DialogRec::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Delete)
    {
        if ((focusWidget() == ui->listWidgetActs) && (!ui->listWidgetActs->children().empty()))
            qDeleteAll(ui->listWidgetActs->selectedItems());
        else if ((focusWidget() == ui->listWidgetIngrs) && (!ui->listWidgetIngrs->children().empty()))
            qDeleteAll(ui->listWidgetIngrs->selectedItems());
        else if (focusWidget() == ui->labelPictFocus)
        {
            imgs.remove(curImg);
            /*qDeleteAll(ui->horizontalLayoutPicts->children());
            for (int i = 0; i < imgs.size(); i++)
                ui->verticalLayoutAllPicts->addWidget(imgs[i]);*/
            ui->verticalLayoutAllPicts->itemAt(curImg)->widget()->setVisible(false);
            curImg = imgs.size() - 1;
            highlightLabeles();
        }

    }
}

void DialogRec::addImage()
{
    QString path = QFileDialog::getOpenFileName(0, "Изображение", "/home", "*.png");
    if (path.isEmpty())
        return;
    ui->labelPictFocus->setImg(path);

    imgs.append(new ClickableQLabel (path, ui->labelPictFocus->size().width()/3));
    ui->verticalLayoutAllPicts->addWidget(imgs.last());
    connect(imgs.last(), SIGNAL(clicked()), this, SLOT(highlightLabeles()));
    curImg = imgs.size() - 1;
    highlightLabeles();
}

void DialogRec::imageToLabel()
{

}

void DialogRec::resizeEvent(QResizeEvent *event)
{
    emit resized();
}

void DialogRec::highlightLabeles()
{
    for (int i = 0; i < imgs.size(); i++)
    {
        imgs[i]->setFrameStyle(QFrame::NoFrame);
        if (imgs[i]->isAct)
            curImg = i;
        imgs[i]->isAct = false;
    }
    imgs[curImg]->setFrameStyle(QFrame::StyledPanel);
    ui->labelPictFocus->setFocus();
}

