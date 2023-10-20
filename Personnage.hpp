#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>
#include <iostream>

using namespace std;

// Création de la classe mère Personnage
class Personnage
{
    protected:
        string nom;
        int pointsDeVie;

    public:
        Personnage(string nom, int pointsDeVie);
        virtual void attaquer(Personnage* cible, int degats);
        virtual void recevoirDegats(int degats);
        bool estEnVie();
        string getNom();
};

#include "Personnage.cpp"

#endif