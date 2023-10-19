#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

#include "Shinigami.hpp"
#include "Quincy.hpp"

int main()
{
    srand(time(0));

    std::string nomShinigami, nomUryu, nomJugram;

    // Choix du nom de son personnage
    std::cout << "Nom du Shinigami : ";
    std::cin >> nomShinigami;

    Shinigami shinigami(nomShinigami);

    // Création des personnages ennemis
    Quincy uryu("Uryu Ishida");
    Quincy jugram("Jugram Haschwalth");

    // Initialisation des équipes
    std::vector<Personnage*> equipeShinigamis = {&shinigami};
    std::vector<Personnage*> equipeQuincys = {&uryu, &jugram};

    while (true)
    {
        // Shinigami choisit une capacité
        int capaciteShinigami;
        std::cout << "Capacités du Shinigami : \n";
        std::cout << "1. Zanpakuto\n2. Shikaie\n3. Bankai\nChoisissez une capacité (1-3) : ";
        std::cin >> capaciteShinigami;
        
        // Quincy choisit une cible et une capacité aléatoirement
        int cibleQuincy = rand() % equipeQuincys.size();
        uryu.attaquer(equipeShinigamis[0]);
        jugram.attaquer(equipeShinigamis[0]);

        // Combat Shinigami vs Quincy
        equipeShinigamis[0]->attaquer(equipeQuincys[cibleQuincy], capaciteShinigami);


}