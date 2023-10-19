#ifndef QUINCY_H
#define QUINCY_H

#include "Personnage.hpp"

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
        Quincy(std::string nom);
        void attaquer(Personnage *cible);
        void recevoirDegats(int degats);
        void utiliserHeilingPfeil(Personnage* cible);
        void utiliserGritz(Personnage* cible);
        void utiliserSklaveti(Personnage* cible);
};

#endif