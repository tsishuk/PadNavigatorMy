#ifndef ROUNDRECTITEM
#define ROUNDRECTITEM

#include <QtWidgets/QGraphicsObject>
#include <QPainter>

class RoundRectItem : public QGraphicsObject
{
public:
    explicit RoundRectItem(const QRectF &bounds, const QColor &color,
                  QGraphicsItem *parent = 0);

    QRectF boundingRect() const Q_DECL_OVERRIDE;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = 0) Q_DECL_OVERRIDE;

private:
    QRectF bounds;
};

#endif // ROUNDRECTITEM

