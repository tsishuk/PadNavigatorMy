#include "padnavigator.h"
#include "splashitem.h"
#include "roundrectitem.h"


//![0]
PadNavigator::PadNavigator(const QSize &size, QWidget* parent)
    :QGraphicsView(parent)
{
    // Splash item
    SplashItem* splash = new SplashItem;
    splash->setZValue(1);

    // Selection item
    RoundRectItem *selectionItem = new RoundRectItem(QRectF(-60, -60, 120, 120), Qt::gray, 0);
    selectionItem->setZValue(0.5);


    QGraphicsScene* scene = new QGraphicsScene(this);
    scene->addItem(splash);
    scene->addItem(selectionItem);
    scene->setSceneRect(scene->itemsBoundingRect());
    setScene(scene);
}
//![0]


//![1]
void PadNavigator::resizeEvent(QResizeEvent* event)
{
    QGraphicsView::resizeEvent(event);
    fitInView(scene()->sceneRect(), Qt::KeepAspectRatio);
}
//![1]


