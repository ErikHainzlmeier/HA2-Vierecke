#ifndef QUADER_H
#define QUADER_H

#include "rechteck.h"

class Quader : private Rechteck{
public:
    Quader();
    Quader(double laenge, double breite, double hoehe);
    virtual ~Quader();

    void setHoehe(double hoehe);
    double getHoehe();
    virtual double getFlaecheninhalt() const;
    double getVolumen() const;

private:
    double m_hoehe;
};

#endif // QUADER_H
