#ifndef PADNAVIGATOR
#define PADNAVIGATOR

#include <QtWidgets/QGraphicsView>

class PadNavigator : public QGraphicsView
{
public:
    PadNavigator(const QSize& size, QWidget* parent = 0);

protected:
    void resizeEvent(QResizeEvent* revent) Q_DECL_OVERRIDE;
};

#endif // PADNAVIGATOR
