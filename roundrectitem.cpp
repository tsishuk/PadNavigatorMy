#include "roundrectitem.h"


// ![]
RoundRectItem::RoundRectItem(const QRectF &bounds, const QColor &color,
                             QGraphicsItem *parent)
    :QGraphicsObject(parent), bounds(bounds)
{
    Q_UNUSED(color);
}
// ![]


// ![]
QRectF RoundRectItem::boundingRect() const
{
    return bounds.adjusted(0, 0, 2, 2);
}
// ![]


// ![]
//
// Рисует квадрат со скруглёнными краями
//
void RoundRectItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);
    painter->setPen(Qt::NoPen);
    painter->setBrush(QColor(0, 0, 0, 64));
    painter->drawRoundRect(bounds.translated(2, 2));
}
//![]
