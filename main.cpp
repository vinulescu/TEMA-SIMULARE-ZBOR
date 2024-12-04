#include "Joc.h"
#include <iostream>

int main() {
    Avion avion1("Boeing 747", 900, 10000, 100);
    Avion avion2("Airbus A320", 850, 12000, 120);
    Avion avion3("Cessna 172", 300, 5000, 80);

    Pilot pilot1("John Doe", 20);
    Pilot pilot2("Jane Smith", 15);
    Pilot pilot3("Bob Brown", 10);

    std::cout << "Alege un avion:\n1. Boeing 747\n2. Airbus A320\n3. Cessna 172\n";
    int alegereAvion;
    std::cin >> alegereAvion;

    Avion avionSelectat = (alegereAvion == 1) ? avion1 :
        (alegereAvion == 2) ? avion2 : avion3;

    std::cout << "Alege un pilot:\n1. John Doe\n2. Jane Smith\n3. Bob Brown\n";
    int alegerePilot;
    std::cin >> alegerePilot;

    Pilot pilotSelectat = (alegerePilot == 1) ? pilot1 :
        (alegerePilot == 2) ? pilot2 : pilot3;

    Joc joc(avionSelectat, pilotSelectat);
    joc.porneste();

    return 0;
}
