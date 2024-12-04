#include "Avion.h"
#include <iostream>

Avion::Avion(const std::string& model, int vitezaMaxima, int altitudineMaxima, int combustibil)
    : model(model), viteza(0), altitudine(0), combustibil(combustibil),
    vitezaMaxima(vitezaMaxima), altitudineMaxima(altitudineMaxima) {}

void Avion::urca(int valoare) {
    if (combustibil <= 0) {
        std::cout << "Nu mai ai combustibil pentru a urca!\n";
        return;
    }
    altitudine += valoare;
    if (altitudine > altitudineMaxima) altitudine = altitudineMaxima;
    consumaCombustibil(5);  // Consum de combustibil
    std::cout << "Urcat la " << altitudine << " metri.\n";
}

void Avion::coboara(int valoare) {
    altitudine -= valoare;
    if (altitudine < 0) altitudine = 0;
    std::cout << "Coborat la " << altitudine << " metri.\n";
}

void Avion::ajusteazaViteza(int nouaViteza) {
    if (combustibil <= 0) {
        std::cout << "Nu mai ai combustibil pentru a accelera!\n";
        return;
    }
    viteza = nouaViteza;
    if (viteza > vitezaMaxima) viteza = vitezaMaxima;
    consumaCombustibil(3);  // Consum de combustibil
    std::cout << "Viteza ajustata la " << viteza << " km/h.\n";
}

void Avion::consumaCombustibil(int cantitate) {
    combustibil -= cantitate;
    if (combustibil < 0) combustibil = 0;
}

int Avion::getAltitudine() const { return altitudine; }
int Avion::getViteza() const { return viteza; }
int Avion::getCombustibil() const { return combustibil; }
std::string Avion::getModel() const { return model; }
