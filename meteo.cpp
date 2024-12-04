#include "Meteo.h"
#include <cstdlib> // Pentru generarea de numere aleatorii
#include <ctime>   // Pentru inițializarea generatorului de numere

Meteo::Meteo() : conditie("Senin"), vitezaVantului(0) {
    conditiiPredefinite = { "Senin", "Innorat", "Furtuna", "Ploua", "Ninsoare" };
    std::srand(static_cast<unsigned int>(std::time(0))); // Inițializare generator random
}

void Meteo::setConditie(const std::string& nouaConditie) {
    conditie = nouaConditie;
}

void Meteo::setVitezaVantului(int viteza) {
    vitezaVantului = viteza;
}

void Meteo::genereazaAleator() {
    int index = std::rand() % conditiiPredefinite.size(); // Selectare index aleator
    conditie = conditiiPredefinite[index];
    vitezaVantului = std::rand() % 50; // Generăm viteza vântului între 0 și 50 km/h
}

std::string Meteo::getConditie() const { return conditie; }
int Meteo::getVitezaVantului() const { return vitezaVantului; }
