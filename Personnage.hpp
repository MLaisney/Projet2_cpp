#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>

// Création de la classe mère Personnage
class Personnage
{
    protected:
        std::string nom;
        int pointsDeVie;

    public:
        Personnage(std::string nom, int pointsDeVie);
        virtual void attaquer(Personnage* cible, int degats) = 0;
        virtual void recevoirDegats(int degats) = 0;
        bool estEnVie();
        std::string getNom();
};

#endif