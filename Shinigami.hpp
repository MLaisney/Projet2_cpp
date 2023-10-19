#ifndef SHINIGAMI_H
#define SHINIGAMI_H

#include "Personnage.hpp"

// Création de la classe fille Shinigami
class Shinigami : public Personnage
{
    private:
        int zanpakutoDegats;
        int shikaieDegats;
        int bankaiDegats;
        int tempsRechargeZanpakuto;
        int tempsRechargeShikaie;
        int tempsRechargeBankai;

    public:
        Shinigami(std::string nom);
        void attaquer(Personnage* cible, int degats); 
        void recevoirDegats(int degats);
        void utiliserZanpakuto(Personnage* cible);
        void utiliserShikaie(Personnage* cible);
        void utiliserBankai(Personnage* cible);
};

#endif