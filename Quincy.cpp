#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "Personnage.hpp"
#include "Quincy.hpp"

using namespace std;

// Initialisation des dégats et des temps de recharge des capacités
Quincy::Quincy(string nom) : Personnage(nom, 1000)
{
    srand(time(0));
    heilingPfeilDegats = 100;
    gritzDegats = 200;
    sklavetiDegats = 500;
    tempsRechargeHeilingPfeil = 1;
    tempsRechargeGritz = 2;
    tempsRechargeSklaveti = 3;
}

// Choix de la capacité à utiliser
void Quincy::attaquer(Personnage* cible)
{
    int capacite = rand() % 3 + 1; // Choix aléatoire de la capacité (entre 1 et 3)
    
    switch (capacite)
    {
        case 1: utiliserHeilingPfeil(cible); break;
        case 2: utiliserGritz(cible); break;
        case 3: utiliserSklaveti(cible); break;
        default: cout << "Capacité invalide.\n";
    }
}

// Fonction en mode défense
void Quincy::recevoirDegats(int degats)
{
    pointsDeVie -= degats;
    if (pointsDeVie < 0) pointsDeVie = 0;
}

// Fonction d'utilisation du Heiling Pfeil
void Quincy::utiliserHeilingPfeil(Personnage* cible)
{
    if (tempsRechargeHeilingPfeil > 0)
    {
        cout << "Le Heiling Pfeil est en recharge.\n";
    }
    else
    {
        cible->recevoirDegats(heilingPfeilDegats);
        tempsRechargeHeilingPfeil = 3; // Temps de recharge
    }
}

// Fonction d'utilisation du Gritz
void Quincy::utiliserGritz(Personnage* cible)
{
    if (tempsRechargeGritz > 0)
    {
        cout << "Le Gritz est en recharge.\n";
    }
    else
    {
        cible->recevoirDegats(gritzDegats);
        tempsRechargeGritz = 2; // Temps de recharge
    }
}

// Fonction d'utilisation du Sklaveti
void Quincy::utiliserSklaveti(Personnage* cible)
{
    if (tempsRechargeSklaveti > 0)
    {
        cout << "Le Sklaveti est en recharge.\n";
    }
    else
    {
        cible->recevoirDegats(sklavetiDegats);
        tempsRechargeSklaveti = 4; // Temps de recharge
    }
}