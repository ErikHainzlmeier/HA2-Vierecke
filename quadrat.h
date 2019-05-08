// Quadrat.h
#ifndef QUADRAT_H
#define QUADRAT_H

class Quadrat{
public:
    // Konstruktor
    Quadrat();
    virtual ~Quadrat();

    void setLaenge(double laenge);
    double getLaenge() const;
    virtual double getFlaecheninhalt() const;

private:
    double m_laenge;
};

#endif  // QUADRAT_H
