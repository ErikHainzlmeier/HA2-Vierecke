#include "quader.h"

Quader::Quader(){
}

Quader::Quader(double laenge, double breite, double hoehe){
    this->setLaenge(laenge);
    this->setBreite(breite);
    m_hoehe = hoehe;
}

Quader::~Quader(){
}

void Quader::setHoehe(double hoehe){
    m_hoehe = hoehe;
}

double Quader::getHoehe(){
    return m_hoehe;
}

double Quader::getFlaecheninhalt() const{
    double flaeche_A = this->getLaenge() * this->getBreite();
    double flaeche_B = this->getLaenge() * m_hoehe;
    double flaeche_C = this->getBreite() * m_hoehe;
    return 2 * (flaeche_A + flaeche_B + flaeche_C);
}
double Quader::getVolumen() const{
    return  this->getLaenge() * this->getBreite() * m_hoehe;
}
