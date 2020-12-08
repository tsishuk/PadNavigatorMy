#include <QtWidgets/QtWidgets>
#include "padnavigator.h"

int main(int argc, char* argv[]){
    QApplication app(argc, argv);
    Q_INIT_RESOURCE(padresource);

    PadNavigator navigator(QSize(3,3));
    navigator.show();

    return app.exec();
}
