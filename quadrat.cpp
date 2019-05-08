// Quadrat.cpp
#include "quadrat.h"

// Konstruktor
Quadrat::Quadrat(){
}

Quadrat::~Quadrat(){
}

void Quadrat::setLaenge(double laenge) {
    m_laenge = laenge;
}

double Quadrat::getLaenge() const {
    return m_laenge;
}

double Quadrat::getFlaecheninhalt() const {
    return m_laenge * m_laenge;
}
