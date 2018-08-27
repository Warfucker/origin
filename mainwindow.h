#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QCloseEvent>
#include <QDialog>
#include <QDialogButtonBox>
#include <QListWidget>

#include "data.h"
#include "dialogyesnocancel.h"
#include "dialogrec.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void showModel();
    void showRecipe();



private slots:
    void closeEvent(QCloseEvent *event);

    void on_actSaveBook_triggered();

    QString on_actSaveBookAs_triggered();

    void on_actLoadBook_triggered();

    void on_actExit_triggered();

    void on_recipeListWidget_itemClicked(QListWidgetItem *item);

    void on_actAddRec_triggered();

private:
    Ui::MainWindow *ui;
    Data d;
    QString currPath;
    bool isChanged;

};

#endif // MAINWINDOW_H
