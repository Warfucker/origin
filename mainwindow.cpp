#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //// ИЗМЕНИТЬ ЗНАЧЕНИЕ isChanged, ТЕКУЩЕЕ ДЛЯ ТЕСТА ////
    isChanged = true;
    //// ИЗМЕНИТЬ ЗНАЧЕНИЕ isChanged, ТЕКУЩЕЕ ДЛЯ ТЕСТА ////
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actSaveBook_triggered()
{
    d.saveModel(currPath);
}

QString MainWindow::on_actSaveBookAs_triggered()
{
    QString path = QFileDialog::getSaveFileName(0, "Сохранение", "/home", "*.db");
    d.saveModel(path);
    return path;
}


void MainWindow::on_actLoadBook_triggered()
{
    QString path = QFileDialog::getOpenFileName(0, "Выберите книгу", "/home", "*.db");
    currPath = path;
    d.loadModel(path);
    showModel();
}

void MainWindow::on_actExit_triggered()
{
    close();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    QFile file("in.txt");
    file.open(QIODevice::WriteOnly | QIODevice::Text);

    if (isChanged)
    {
        DialogYesNoCancel q;
        q.setLabelText("Вы хотите сохранить изменения?");
        int res = q.exec();
        if (res == QDialog::Accepted)
        {
            if (on_actSaveBookAs_triggered().isEmpty())
                event->ignore();
            else
                QMainWindow::closeEvent(event);
        }
        else if (res == QDialog::Rejected)
            QMainWindow::closeEvent(event);
        else if (res == 2)
            event->ignore();
    }
}

void MainWindow::showModel()
{
    for (int i = 0; i < d.getRecCount(); i++)
        ui->recipeListWidget->addItem(d.getRecipe(i).name);
}

void MainWindow::on_recipeListWidget_itemClicked(QListWidgetItem *item)
{
    /*Recipe res;
    res = d.getRecipe(item->text());
    ui->descriptTextEdit->setText(res.descr);
    QPixmap outPixmap = QPixmap();
    qDebug() << res.picts.count();
    for (int i = 0; i < res.picts.count(); i++)
    {
        outPixmap.loadFromData(res.picts[i]);
        ui->pictureLabel->setPixmap(outPixmap);
    }*/

    QString path = QFileDialog::getOpenFileName(0, "Выберите книгу", "/home", "*.png");
    QByteArray *temp = new QByteArray();
    QFile *file = new QFile(path);
    file->open(QIODevice::ReadOnly);
    *temp = file->readAll();
    QPixmap *pix = new QPixmap();
    pix->loadFromData(*temp);
    ui->pictureLabel->setPixmap(*pix);
}

void MainWindow::on_actAddRec_triggered()
{
    DialogRec dr;
    if (dr.exec() == QDialog::Accepted)
    {

    }
}
