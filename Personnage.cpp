#include "Personnage.hpp"

Personnage::Personnage(std::string nom, int pointsDeVie) :
nom(nom), pointsDeVie(pointsDeVie){}

// Fonction pour le retour des points de vie
bool Personnage::estEnVie()
{
    return pointsDeVie > 0;
}

// Fonction pour initialisation du nom du personnage
std::string Personnage::getnom()
{
    return nom;
}