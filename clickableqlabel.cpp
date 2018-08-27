#include "clickableqlabel.h"

ClickableQLabel::ClickableQLabel(QWidget* parent, const QString& text)
    : QLabel(parent)
{
    setText(text);
    setUp();
}

ClickableQLabel::ClickableQLabel(QString path, int w, QWidget* parent)
    : QLabel(parent)
{
    resize(90, 90);
    setImg(path);
    setMinimumSize(90, 90);
    setMaximumSize(90, 90);
    setUp();
}

void ClickableQLabel::setUp()
{
    connect(this, SIGNAL(clicked()), this, SLOT(Clicked()));
    mn = false;
    isAct = false;
}

ClickableQLabel::~ClickableQLabel()
{
}

void ClickableQLabel::mouseDoubleClickEvent(QMouseEvent* event)
{
    emit doubleClicked();
}

void ClickableQLabel::resizeEvent(QResizeEvent *event)
{
    if (pixmap() != NULL)
    {
        updateGeometry();
        setPixmap(pxm.scaled(size().width(), int((double)(size().width()) / rate)));
    }
}

void ClickableQLabel::mousePressEvent(QMouseEvent *ev)
{
    if (!mn)
        emit clicked();
}

void ClickableQLabel::Clicked()
{

    isAct = true;
//    qDebug() << isAct;
}

void ClickableQLabel::setImg(QString path)
{
    QPointer<QFile> fptr = new QFile(path);
    fptr.data()->open(QIODevice::ReadOnly);
    QByteArray temp = fptr.data()->readAll();
    pxm.loadFromData(temp);
    QSize pxms;
    rate = (double)(pxm.width())/(double)(pxm.height());

    if (rate >= 1)
    {
        pxms.setWidth(size().width());
        pxms.setHeight((double)(size().height()) / rate);
    }
    else
    {
        pxms.setHeight(size().height());
        pxms.setWidth((double)(size().width()) * rate);
    }

    //resize(pxms);
    /*setFixedSize(pxms);
    setScaledContents(true);*/


    setPixmap(QPixmap::fromImage(QImage(path)).scaled(size(), Qt::KeepAspectRatio));
}
