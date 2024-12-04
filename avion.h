#ifndef AVION_H
#define AVION_H

#include <string>

class Avion {
private:
    std::string model;
    int viteza;
    int altitudine;
    int combustibil;  // Adăugare combustibil
    int vitezaMaxima;
    int altitudineMaxima;

public:
    Avion(const std::string& model, int vitezaMaxima, int altitudineMaxima, int combustibil);

    void urca(int valoare);
    void coboara(int valoare);
    void ajusteazaViteza(int nouaViteza);
    void consumaCombustibil(int cantitate); // Nouă metodă

    int getAltitudine() const;
    int getViteza() const;
    int getCombustibil() const; // Nouă metodă
    std::string getModel() const;
};

#endif
