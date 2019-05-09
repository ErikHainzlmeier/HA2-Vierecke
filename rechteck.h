#ifndef RECHTECK_H
#define RECHTECK_H

#include "quadrat.h"

class Rechteck : public Quadrat {
public:
    Rechteck();
    virtual ~Rechteck();

    void setBreite(double breite);
    double getBreite() const;
    virtual double getFlaecheninhalt() const;

private:
    double m_breite;
};

#endif // RECHTECK_H
