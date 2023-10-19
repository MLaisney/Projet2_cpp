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
}