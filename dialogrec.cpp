#include "dialogrec.h"
#include "ui_dialogrec.h"

DialogRec::DialogRec(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogRec)
{
    ui->setupUi(this);

    curImg = -1;

    connect(ui->widgetImgs, SIGNAL(doubleClicked()), this, SLOT(addImage()));
    connect(ui->widgetImgs, SIGNAL(nextClicked()),   this, SLOT(nextImg()));
    connect(ui->widgetImgs, SIGNAL(prevClicked()),   this, SLOT(prevImg()));
    connect(ui->widgetImgs, SIGNAL(rightClicked()),  this, SLOT(contextMenu()));

    setFixedSize(size());
}

DialogRec::~DialogRec()
{
    delete ui;
}

void DialogRec::on_pushButtonIngrAdd_clicked()
{
    if (!ui->lineEditIngrName->text().isEmpty())
    {
        ui->listWidgetIngrs->addItem(ui->lineEditIngrName->text());
        ui->lineEditIngrName->clear();
    }
}

void DialogRec::on_pushButtonActAdd_clicked()
{
    if (!ui->lineEditActName->text().isEmpty())
    {
        ui->listWidgetActs->addItem(ui->lineEditActName->text());
        ui->lineEditActName->clear();
    }
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
    }
}

void DialogRec::addImage()
{
    QString path = QFileDialog::getOpenFileName(0, "Изображение", "/home", "*.png");
    if (path.isEmpty())
        return;
    imgs.append(QImage(path));
    curImg = imgs.size() - 1;
    ui->widgetImgs->showImage(imgs.last(), curImg + 1, imgs.size());

    /*
    imgs.append(new ClickableQLabel (path, ui->labelPictFocus->size().width()/3));
    ui->verticalLayoutAllPicts->addWidget(imgs.last());
    connect(imgs.last(), SIGNAL(clicked()), this, SLOT(highlightLabeles()));
    highlightLabeles();*/
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
    /*for (int i = 0; i < imgs.size(); i++)
    {
        imgs[i]->setFrameStyle(QFrame::NoFrame);
        if (imgs[i]->isAct)
            curImg = i;
        imgs[i]->isAct = false;
    }
    imgs[curImg]->setFrameStyle(QFrame::StyledPanel);*/
    //ui->labelPictFocus->setFocus();
}


void DialogRec::on_buttonBox_accepted()
{
    for (int i = 0; i < ui->listWidgetActs->count(); i++)
        rec.acts.append(ui->listWidgetActs->item(i)->text());
    for (int i = 0; i < ui->listWidgetIngrs->count(); i++)
        rec.ingrs.append(ui->listWidgetIngrs->item(i)->text());
    rec.descr = ui->textEditDescr->toPlainText();
    rec.name = ui->lineEditName->text();
    rec.picts = imgs;
}

void DialogRec::nextImg()
{
    if (imgs.isEmpty() || 1 == imgs.count())
        return;
    if (curImg == imgs.count() - 1)
        curImg = 0;
    else
        curImg++;

    ui->widgetImgs->showImage(imgs[curImg], curImg + 1, imgs.count());
}

void DialogRec::prevImg()
{
    if (imgs.isEmpty() || 1 == imgs.count())
        return;
    if (curImg == 0)
        curImg = imgs.size() - 1;
    else
        curImg--;

    ui->widgetImgs->showImage(imgs[curImg], curImg + 1, imgs.count());
}

void DialogRec::contextMenu()
{
    QMenu *menu = new QMenu;
    menu->addAction(tr("Удалить изображение"), this,  SLOT(deleteImg()));
    menu->exec(QCursor::pos());
}

void DialogRec::deleteImg()
{
    if (!imgs.empty())
    {
        imgs.remove(curImg);
        if (imgs.isEmpty())
        {
            curImg = -1;
            QImage img;
            ui->widgetImgs->showImage(img, 0, 0);
            return;
        }
        curImg = (curImg == imgs.size()) ? --curImg : curImg;
        ui->widgetImgs->showImage(imgs[curImg], curImg + 1, imgs.size());
    }
}
