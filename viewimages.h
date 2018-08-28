#ifndef VIEWIMAGES_H
#define VIEWIMAGES_H

#include <QWidget>
#include <QDebug>

namespace Ui {
class ViewImages;
}

class ViewImages : public QWidget
{
    Q_OBJECT

public:
    explicit ViewImages(QWidget *parent = nullptr);
    ~ViewImages();

    void showImage(QImage img, int curNum, int maxNum);
    bool isFocused();

private:
    Ui::ViewImages *ui;

signals:
    void doubleClicked();
    void nextClicked();
    void prevClicked();
    void rightClicked();

private slots:
    void on_pushButtonPrev_clicked();
    void on_pushButtonNext_clicked();
};

#endif // VIEWIMAGES_H
