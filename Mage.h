#ifndef MAGE_H
#define MAGE_H
#include <iostream>
#include <string>
#include <vector>
#include "Monstre.h"

class Mage
{
    private:
    std::string nomMage;
    int hpMage;
    std::string listeMonstre[3];
    int listeHP[3];
    int listeAtk[3];

    public:
    Mage();
    Mage(std::string nom, int hp);
    void AffichageMage();
    void Invoquer();
    void Attaquer(Mage &attaque , Monstre &defense);
    void AttaqueMage(Mage &cible, int degatsMonstre);
    void DommagesSubis(int degatsSubis);
 
};
 
#endif