#include "tia.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TIA w;

    w.setWindowTitle(QObject::tr("Tr4ceflow-Interactive-Analyzer (TIA)"));
    w.show();

    return a.exec();
}
