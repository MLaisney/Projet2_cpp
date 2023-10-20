#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "Personnage.hpp"
#include "Shinigami.hpp"

using namespace std;

// Initialisation des dégats et des temps de recharge des capacités
Shinigami::Shinigami(string nom) : Personnage(nom, 2000)
{
    srand(time(0));
    zanpakutoDegats = rand() % 500 + 500;
    shikaieDegats = rand() % 300 + 300;
    bankaiDegats = rand() % 700 + 700;
    tempsRechargeZanpakuto = rand() % 4 + 1;
    tempsRechargeShikaie = rand() % 4 + 1;
    tempsRechargeBankai = rand() % 4 + 1;
}

// Choix de la capacité à choisir
void Shinigami::attaquer(Personnage* cible, int capacite) 
{
    switch (capacite) 
    {
        case 1: utiliserZanpakuto(cible); break;
        case 2: utiliserShikaie(cible); break;
        case 3: utiliserBankai(cible); break;
        default: cout << "Capacité invalide.\n";
    }
}

// Fonction en mode défense
void Shinigami::recevoirDegats(int degats)
{
    pointsDeVie -= degats;
    if (pointsDeVie < 0) pointsDeVie = 0;
}

// Fonction d'utilisation du Zanpakuto
void Shinigami::utiliserZanpakuto(Personnage* cible)
{
    if (tempsRechargeZanpakuto > 0)
    {
        cout << "Le Zanpakuto est en recharge.\n";
    }
    else
    {
        cible->recevoirDegats(zanpakutoDegats);
        tempsRechargeZanpakuto = 3; // Temps de recharge
    }
}

// Fonction d'utilisation du Shikaie
void Shinigami::utiliserShikaie(Personnage* cible)
{
    if (tempsRechargeShikaie > 0)
    {
        cout << "Le Shikaie est en recharge.\n";
    }
    else
    {
        cible->recevoirDegats(shikaieDegats);
        tempsRechargeShikaie = 2; // Temps de recharge
    }
}

// Fonction d'utilisation du Bankai
void Shinigami::utiliserBankai(Personnage* cible)
{
    if (tempsRechargeBankai > 0)
    {
        cout << "Le Bankai est en recharge.\n";
    }
    else
    {
        cible->recevoirDegats(bankaiDegats);
        tempsRechargeBankai = 4; // Temps de recharge
    }
}