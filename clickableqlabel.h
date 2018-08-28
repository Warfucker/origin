#ifndef CLICKABLEQLABEL_H
#define CLICKABLEQLABEL_H

#include <QLabel>
#include <QObject>
#include <QFile>
#include <QPointer>
#include <QDebug>
#include <QMouseEvent>

class ClickableQLabel : public QLabel
{
Q_OBJECT
public:
    explicit ClickableQLabel(QWidget *parent = 0, const QString& text = "");
    ~ClickableQLabel();
    void setImg(QImage img);

    bool mn;
    bool isAct;

private slots:
    void Clicked();

private:
    QPixmap pxm;
    double rate;

    void setup();

signals:
    void doubleClicked();
    void clicked();
    void rightClicked();

protected:
    void mouseDoubleClickEvent(QMouseEvent *event);
    void resizeEvent(QResizeEvent *event);
    void mousePressEvent(QMouseEvent *ev);

};

#endif // CLICKABLEQLABEL_H
