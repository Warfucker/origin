#include "clickableqlabel.h"

ClickableQLabel::ClickableQLabel(QWidget* parent, const QString& text)
    : QLabel(parent)
{
    setText(text);
    setup();
}

void ClickableQLabel::setup()
{
    //connect(this, SIGNAL(clicked()), this, SLOT(Clicked()));
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
    if (ev->button() == Qt::RightButton)
        emit rightClicked();
    else
        emit clicked();
}

void ClickableQLabel::Clicked()
{

    isAct = true;
//    qDebug() << isAct;
}

void ClickableQLabel::setImg(QImage img)
{
    setPixmap(QPixmap::fromImage(img).scaled(size(), Qt::KeepAspectRatio));
}
