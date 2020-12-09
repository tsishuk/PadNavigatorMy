#ifndef FLIPABLEPAD
#define FLIPABLEPAD
#include "roundrectitem.h"

class FlipablePad : public RoundRectItem
{
public:
    explicit FlipablePad(const QSize &size, QGraphicsItem *parent = 0);

    static QRectF boundsFromSize(const QSize& size);
};

#endif // FLIPABLEPAD

