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

void Shinigami::utiliserZanpakuto(Personnage* cible)
{
    if (tempsRechargeZanpakuto > 0)
    {
        std::cout << "Le Zanpakuto est en recharge.\n";
    }
    else
    {
        cible->recevoirDegats(zanpakutoDegats);
        tempsRechargeZanpakuto = 3; // Temps de recharge
    }
}

void Shinigami::utiliserShikaie(Personnage* cible)
{
    if (tempsRechargeShikaie > 0)
    {
        std::cout << "Le Shikaie est en recharge.\n";
    }
    else
    {
        cible->recevoirDegats(shikaieDegats);
        tempsRechargeShikaie = 2; // Temps de recharge
    }
}

void Shinigami::utiliserBankai(Personnage* cible)
{
    if (tempsRechargeBankai > 0)
    {
        std::cout << "Le Bankai est en recharge.\n";
    }
    else
    {
        cible->recevoirDegats(bankaiDegats);
        tempsRechargeBankai = 4; // Temps de recharge
    }
}