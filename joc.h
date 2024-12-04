#ifndef JOC_H
#define JOC_H

#include "Avion.h"
#include "Meteo.h"
#include "Pilot.h"

class Joc {
private:
    Avion avion;
    Meteo meteo;
    Pilot pilot;

public:
    Joc(const Avion& avion, const Pilot& pilot);

    void schimbaMeteo(const std::string& conditie, int vitezaVantului);
    void genereazaMeteoAleator(); // Schimbă condițiile meteo aleatoriu
    void porneste();
};

#endif
