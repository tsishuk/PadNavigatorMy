#include "padnavigator.h"
#include "splashitem.h"

//![0]
PadNavigator::PadNavigator(const QSize &size, QWidget* parent)
    :QGraphicsView(parent)
{
    SplashItem* splash = new SplashItem;
    splash->setZValue(1);

    QGraphicsScene* scene = new QGraphicsScene(this);
    scene->addItem(splash);
    scene->setSceneRect(scene->itemsBoundingRect());
    setScene(scene);
}
//![0]


//![1]
void PadNavigator::resizeEvent(QResizeEvent* event)
{
    QGraphicsView::resizeEvent(event);
    //fitInView(scene()->sceneRect(), Qt::KeepAspectRatio);
}
//![1]


