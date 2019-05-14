#include <QCoreApplication>
#include "quader.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    for(int i = 0; i<3; i++){
        double laenge, breite, hoehe;

        std::cout << "Laenge eingeben: ";
        std::cin >> laenge;
        std::cout << "Breite eingeben: ";
        std::cin >> breite;
        std::cout << "Hoehe eingeben: ";
        std::cin >> hoehe;

        Quader quader(laenge, breite, hoehe);

        std::cout << "Quader Volumen: " << quader.getVolumen() << std::endl;
        std::cout << "Quader Flaecheninhalt: " << quader.getFlaecheninhalt() << "\n\n";
    }

    return 0;
//    return a.exec();
}
