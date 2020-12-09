#include "padnavigator.h"
#include "splashitem.h"
#include "roundrectitem.h"
#include "flipablepad.h"


//![0]
PadNavigator::PadNavigator(const QSize &size, QWidget* parent)
    :QGraphicsView(parent)
{
    Q_UNUSED(size);
    // Splash item
    SplashItem* splash = new SplashItem;
    splash->setZValue(1);

    // Selection item
    RoundRectItem *selectionItem = new RoundRectItem(QRectF(-60, -60, 120, 120), Qt::gray, 0);
    selectionItem->setZValue(0.5);

    // Main pad with icons on it
    FlipablePad* pad = new FlipablePad(size);

    QGraphicsScene* scene = new QGraphicsScene(this);
    scene->addItem(pad);
    //scene->addItem(splash);
    scene->addItem(selectionItem);
    scene->setSceneRect(scene->itemsBoundingRect());
    setScene(scene);

    const QRectF sbr = splash->boundingRect();
    splash->setPos(-sbr.width() / 2, scene->sceneRect().top() - 2);
    scene->addItem(splash);
}
//![0]


//![1]
void PadNavigator::resizeEvent(QResizeEvent* event)
{
    QGraphicsView::resizeEvent(event);
    fitInView(scene()->sceneRect(), Qt::KeepAspectRatio);
}
//![1]


