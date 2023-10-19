#ifndef QUINCY_H
#define QUINCY_H

#include "Personnage.hpp"

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
        void attaquer(Personnage* cible, int degats); 
        void recevoirDegats(int degats);
        void utiliserHeilingPfeil(Personnage* cible);
        void utiliserGritz(Personnage* cible);
        void utiliserSklaveti(Personnage* cible);
};

#endif