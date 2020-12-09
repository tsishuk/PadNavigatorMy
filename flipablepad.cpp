#include "flipablepad.h"
#include <QDirIterator>
#include <QDebug>

static QRectF boundsFromSize(const QSize& size)
{
    return QRectF((-size.width() / 2.0) * 150, (-size.height() / 2.0) * 150,
                  size.width() * 150, size.height() * 150);
}

FlipablePad::FlipablePad(const QSize &size, QGraphicsItem *parent)
    : RoundRectItem(boundsFromSize(size), QColor(226, 255, 92, 64), parent)
{
    int numberOfIcons = size.width() * size.height();
    QList<QPixmap> pixmaps;
//    QDirIterator it(":/images", QStringList()<<"*.png");
//    while (it.hasNext() && pixmaps.size()<numberOfIcons) {
//        pixmaps << it.next();
//    }
    //qDebug() << pixmaps;
}
