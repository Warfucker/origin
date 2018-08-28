#ifndef DIALOGREC_H
#define DIALOGREC_H

#include <QDialog>
#include <QKeyEvent>
#include <QDebug>
#include <QFileDialog>
#include <QDesktopWidget>
#include <QMenu>

#include "clickableqlabel.h"
#include "recipe.h"

namespace Ui {
class DialogRec;
}

class DialogRec : public QDialog
{
    Q_OBJECT

public:
    explicit DialogRec(QWidget *parent = 0);
    ~DialogRec();

    Recipe rec;

private slots:
    void on_pushButtonIngrAdd_clicked();

    void on_pushButtonActAdd_clicked();

    void on_listWidgetIngrs_currentRowChanged(int currentRow);

    void keyPressEvent(QKeyEvent *event);

    void addImage();

    void imageToLabel();

    void highlightLabeles();

    void on_buttonBox_accepted();

    void nextImg();

    void prevImg();

    void contextMenu();

    void deleteImg();

private:
    Ui::DialogRec *ui;

    QVector<QImage> imgs;
    int curImg;

protected:
    void resizeEvent(QResizeEvent *event);

signals:
    void resized();
};

#endif // DIALOGREC_H
