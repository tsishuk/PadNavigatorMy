#ifndef FLIPABLEPAD
#define FLIPABLEPAD
#include "roundrectitem.h"

class FlipablePad : public RoundRectItem
{
public:
    explicit FlipablePad(const QSize &size, QGraphicsItem *parent = 0);

private:
    QVector<QVector<RoundRectItem *> > iconGrid;
};

#endif // FLIPABLEPAD

