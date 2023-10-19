#include "Quincy.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Quincy::Quincy(std::string nom) : Personnage(nom, 1000)
{
    srand(time(0));
    heilingPfeilDegats = rand() % 500 + 500;
    gritzDegats = rand() % 300 + 300;
    sklavetiDegats = rand() % 700 + 700;
    tempsRechargeHeilingPfeil = rand() % 4 + 1;
    tempsRechargeGritz = rand() % 4 + 1;
    tempsRechargeSklaveti = rand() % 4 + 1;
}

void Quincy::attaquer(Personnage* cible)
{
    int capacite = rand() % 3 + 1; // Choix aléatoire de la capacité (entre 1 et 3)
    
    switch (capacite)
    {
        case 1: utiliserHeilingPfeil(cible); break;
        case 2: utiliserGritz(cible); break;
        case 3: utiliserSklaveti(cible); break;
        default: std::cout << "Capacité invalide.\n";
    }
}

void Quincy::recevoirDegats(int degats)
{
    pointsDeVie -= degats;
    if (pointsDeVie < 0) pointsDeVie = 0;
}

void Quincy::utiliserHeilingPfeil(Personnage* cible)
{
    if (tempsRechargeHeilingPfeil > 0)
    {
        std::cout << "Le Heiling Pfeil est en recharge.\n";
    }
    else
    {
        cible->recevoirDegats(heilingPfeilDegats);
        tempsRechargeHeilingPfeil = 3; // Temps de recharge
    }
}

void Quincy::utiliserGritz(Personnage* cible)
{
    if (tempsRechargeGritz > 0)
    {
        std::cout << "Le Gritz est en recharge.\n";
    }
    else
    {
        cible->recevoirDegats(gritzDegats);
        tempsRechargeGritz = 2; // Temps de recharge
    }
}