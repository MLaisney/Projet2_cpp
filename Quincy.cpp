#include "Quincy.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Quincy::Quincy(std::string nom) : Personnage(nom, 1000)
{
    srand(time(0));
    heilingPfeilDegats = rand() % 500 + 500;
    gritzDegats = rand() % 300 + 300;
    sklavetiDegats = rand() % 700 + 700;
    tempsRechargeHeilingPfeil = rand() % 4 + 1;
    tempsRechargeGritz = rand() % 4 + 1;
    tempsRechargeSklaveti = rand() % 4 + 1;
}