#ifndef METEO_H
#define METEO_H

#include <string>
#include <vector>

class Meteo {
private:
    std::string conditie;
    int vitezaVantului;
    std::vector<std::string> conditiiPredefinite; // Lista de condiții meteo

public:
    Meteo();
    void setConditie(const std::string& nouaConditie);
    void setVitezaVantului(int viteza);
    void genereazaAleator(); // Selectează o condiție meteo aleatorie

    std::string getConditie() const;
    int getVitezaVantului() const;
};

#endif
