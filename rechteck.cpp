#include "rechteck.h"

Rechteck::Rechteck() {
}

Rechteck::~Rechteck(){
}

void Rechteck::setBreite(double breite){
    m_breite = breite;
}
double Rechteck::getBreite() const{
    return m_breite;
}

double Rechteck::getFlaecheninhalt() const{
    return Rechteck::getLaenge() * m_breite;
}
