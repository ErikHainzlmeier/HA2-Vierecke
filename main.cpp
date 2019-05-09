#include <QCoreApplication>
#include "quader.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Quader quader1(1, 2, 3);
    Quader quader2(2, 3, 4);
    Quader quader3(3, 4, 5);

    printf("quader1 Volumen: %lf\n", quader1.getVolumen());
    printf("quader2 Volumen: %lf\n", quader2.getVolumen());
    printf("quader3 Volumen: %lf\n", quader3.getVolumen());

    printf("quader1 Flaeche: %lf\n", quader1.getFlaecheninhalt());
    printf("quader2 Flaeche: %lf\n", quader2.getFlaecheninhalt());
    printf("quader3 Flaeche: %lf\n", quader3.getFlaecheninhalt());
    return a.exec();
}
