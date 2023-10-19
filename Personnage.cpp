#include "Personnage.hpp"

Personnage::Personnage(std::string nom, int pointsDeVie) :
nom(nom), pointsDeVie(pointsDeVie){}

bool Personnage::estEnVie()
{
    return pointsDeVie > 0;
}