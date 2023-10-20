#ifndef QUINCY_H
#define QUINCY_H

#include <iostream>
#include <string>

#include "Personnage.hpp"

using namespace std;

// Création de la classe fille Quincy
class Quincy : public Personnage
{
    private:
        int heilingPfeilDegats;
        int gritzDegats;
        int sklavetiDegats;
        int tempsRechargeHeilingPfeil;
        int tempsRechargeGritz;
        int tempsRechargeSklaveti;

    public:
        Quincy(string nom);
        void attaquer(Personnage *cible);
        void recevoirDegats(int degats);
        void utiliserHeilingPfeil(Personnage* cible);
        void utiliserGritz(Personnage* cible);
        void utiliserSklaveti(Personnage* cible);
};

#include "Quincy.cpp"

#endif