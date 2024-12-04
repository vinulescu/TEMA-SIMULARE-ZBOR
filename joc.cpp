#include "Joc.h"
#include <iostream>

Joc::Joc(const Avion& avion, const Pilot& pilot) : avion(avion), pilot(pilot) {}

void Joc::schimbaMeteo(const std::string& conditie, int vitezaVantului) {
    meteo.setConditie(conditie);
    meteo.setVitezaVantului(vitezaVantului);
    std::cout << "Conditiile meteo au fost schimbate la " << conditie
        << " cu viteza vantului de " << vitezaVantului << " km/h.\n";
}

void Joc::genereazaMeteoAleator() {
    meteo.genereazaAleator();
    std::cout << "Conditiile meteo actuale sunt " << meteo.getConditie()
        << " cu viteza vantului de " << meteo.getVitezaVantului() << " km/h.\n";
}

void Joc::porneste() {
    std::cout << "Pornirea simularii de zbor...\n";
    std::cout << "Avion: " << avion.getModel() << ", Pilot: " << pilot.getNume() << "\n";

    while (true) {
        std::cout << "\nOptiuni disponibile:\n";
        std::cout << "1. Ajusteaza altitudinea\n";
        std::cout << "2. Ajusteaza viteza\n";
        std::cout << "3. Verifica combustibil\n";
        std::cout << "4. Schimba meteo aleatoriu\n";
        std::cout << "0. Termina simularea\n";
        std::cout << "Alege o optiune: ";

        int optiune;
        std::cin >> optiune;

        switch (optiune) {
        case 1: {
            int nouaAltitudine;
            std::cout << "Introdu noua altitudine: ";
            std::cin >> nouaAltitudine;
            avion.urca(nouaAltitudine - avion.getAltitudine());
            break;
        }
        case 2: {
            int nouaViteza;
            std::cout << "Introdu noua viteza: ";
            std::cin >> nouaViteza;
            avion.ajusteazaViteza(nouaViteza);
            break;
        }
        case 3:
            std::cout << "Combustibil ramas: " << avion.getCombustibil() << " L.\n";
            break;
        case 4:
            genereazaMeteoAleator();
            break;
        case 0:
            std::cout << "Simularea s-a incheiat.\n";
            return;
        default:
            std::cout << "Optiune invalida. Reincearca.\n";
        }
    }
}
