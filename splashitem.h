#ifndef SPLASHITEM
#define SPLASHITEM

#include <QtWidgets/QGraphicsObject>

class SplashItem : public QGraphicsObject
{
public:
    SplashItem(QGraphicsItem* parent = 0);

    QRectF boundingRect() const Q_DECL_OVERRIDE;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = 0) Q_DECL_OVERRIDE;

private:
    QString text;
};

#endif // SPLASHITEM

