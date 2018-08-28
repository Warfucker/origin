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

    connect(ui->widgetImgs, SIGNAL(nextClicked()), this, SLOT(nextImg()));
    connect(ui->widgetImgs, SIGNAL(prevClicked()), this, SLOT(prevImg()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actSaveBook_triggered()
{
    for (int i = 0; i < recs.count(); i++)
        d.addRecipe(recs[i]);
    if (currPath.isEmpty())
        currPath = QFileDialog::getSaveFileName(0, "Книга", "/home", "*.dbrc");
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

}

void MainWindow::on_actAddRec_triggered()
{
    DialogRec dr;
    if (dr.exec() == QDialog::Accepted)
    {
        if (dr.rec.name.isEmpty())
            return;
        recs.append(dr.rec);
        refresh();
    }
}

void MainWindow::refresh()
{
    ui->recipeListWidget->clear();
    for (int i = 0; i < recs.count(); i++)
        ui->recipeListWidget->addItem(recs[i].name);
}

void MainWindow::on_recipeListWidget_itemSelectionChanged()
{
    int i = ui->recipeListWidget->currentRow();
    ui->widgetImgs->showImage(recs[i].picts[0], 1, recs[i].picts.count());
    ui->descriptTextEdit->setText(recs[i].descr);
}

