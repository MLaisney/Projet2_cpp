#include "Shinigami.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Shinigami::Shinigami(std::string nom) : Personnage(nom, 2000)
{
    srand(time(0));
    zanpakutoDegats = rand() % 500 + 500;
    shikaieDegats = rand() % 300 + 300;
    bankaiDegats = rand() % 700 + 700;
    tempsRechargeZanpakuto = rand() % 4 + 1;
    tempsRechargeShikaie = rand() % 4 + 1;
    tempsRechargeBankai = rand() % 4 + 1;
}

