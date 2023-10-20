#include <iostream>
#include <string>

#include "Personnage.hpp"
#include "Shinigami.hpp"
#include "Quincy.hpp"

using namespace std;

Personnage::Personnage(string nom, int pointsDeVie) :
nom(nom), pointsDeVie(pointsDeVie){}

// Fonction pour le retour des points de vie
bool Personnage::estEnVie()
{
    return pointsDeVie > 0;
}

// Fonction pour initialisation du nom du personnage
string Personnage::getNom()
{
    return nom;
}