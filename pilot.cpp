#include "Pilot.h"

Pilot::Pilot(const std::string& nume, int experienta) : nume(nume), experienta(experienta) {}

int Pilot::influentaViteza() const {
    return -10 * (3 - experienta);  // Experiența mai mică scade viteza mai mult
}

int Pilot::influentaAltitudine() const {
    return -50 * (3 - experienta);  // Experiența mai mică scade altitudinea mai mult
}

std::string Pilot::getNume() const { return nume; }
int Pilot::getExperienta() const { return experienta; }
