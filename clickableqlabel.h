#ifndef CLICKABLEQLABEL_H
#define CLICKABLEQLABEL_H

#include <QLabel>
#include <QObject>
#include <QFile>
#include <QPointer>
#include <QDebug>

class ClickableQLabel : public QLabel
{
Q_OBJECT
public:
    explicit ClickableQLabel(QWidget *parent = 0, const QString& text = "");
    ClickableQLabel(QString path, int w, QWidget *parent = 0);
    ~ClickableQLabel();
    void setImg(QString path);

    bool mn;
    bool isAct;

private slots:
    void Clicked();

private:
    QPixmap pxm;
    double rate;

    void setUp();

signals:
    void doubleClicked();
    void clicked();

protected:
    void mouseDoubleClickEvent(QMouseEvent *event);
    void resizeEvent(QResizeEvent *event);
    void mousePressEvent(QMouseEvent *ev);

};

#endif // CLICKABLEQLABEL_H
