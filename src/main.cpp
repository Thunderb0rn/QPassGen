#include "qpass.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QPass w;
    w.show();

    return app.exec();
}

