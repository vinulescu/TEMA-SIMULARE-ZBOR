#ifndef PILOT_H
#define PILOT_H

#include <string>

class Pilot {
private:
    std::string nume;
    int experienta; // Nivel de experiență (1-3)

public:
    Pilot(const std::string& nume, int experienta);
    int influentaViteza() const;   // Scade viteza în condiții nefavorabile
    int influentaAltitudine() const; // Scade altitudinea în condiții nefavorabile

    std::string getNume() const;
    int getExperienta() const;
};

#endif
