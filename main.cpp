#include <QCoreApplication>
#include "quader.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Quader quader1(1, 1, 1);
    Quader quader2(2, 2, 2);
    Quader quader3(3, 3, 3);

    printf("quader1 Volumen: %lf\n", quader1.getVolumen());
    printf("quader2 Volumen: %lf\n", quader2.getVolumen());
    printf("quader3 Volumen: %lf\n", quader3.getVolumen());
    return a.exec();
}
