#include <QtWidgets/QtWidgets>

int main(int argc, char* argv[]){
    QApplication app(argc, argv);

    PadNavigator navigator;
    navigator.show();

    return app.exec();
}
