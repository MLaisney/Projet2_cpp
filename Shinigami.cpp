#include "Shinigami.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Shinigami::Shinigami(std::string nom) : Personnage(nom, 2000)
{
    srand(time(0));
    zanpakutoDegats = rand() % 500 + 500;
    shikaieDegats = rand() % 300 + 300;
    bankaiDegats = rand() % 700 + 700;
    tempsRechargeZanpakuto = rand() % 4 + 1;
    tempsRechargeShikaie = rand() % 4 + 1;
    tempsRechargeBankai = rand() % 4 + 1;
}

void Shinigami::attaquer(Personnage* cible, int capacite) 
{
    switch (capacite) 
    {
        case 1: utiliserZanpakuto(cible); break;
        case 2: utiliserShikaie(cible); break;
        case 3: utiliserBankai(cible); break;
        default: std::cout << "Capacité invalide.\n";
    }
}

void Shinigami::recevoirDegats(int degats)
{
    pointsDeVie -= degats;
    if (pointsDeVie < 0) pointsDeVie = 0;
}