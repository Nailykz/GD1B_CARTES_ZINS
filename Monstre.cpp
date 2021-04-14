#ifndef MONSTRE_CPP
#define MONSTRE_CPP
#include "Monstre.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Monstre::Monstre(){
    nom = "Monstre Moussu";
    hp = 7;
    score_Attaque = 2;
    _enForme = true;
}

Monstre::Monstre(std::string nom, int hp, int score_Attaque, bool epuise) : nom(nom), hp(hp), score_Attaque(score_Attaque){
    _enForme = true;
    
}

void Monstre::AffichageMonstre(){

    std::cout << "Points de vie de " << nom << " : " << hp << std::endl;
    std::cout << "Score d'attaque de " << nom << " : " << score_Attaque << std::endl;
    cout << nom << " : Attaque = " << score_Attaque << "HP = " << hp << endl;
    if(_enForme == false){
        std::cout << nom << " est épuisé." << std::endl << std::endl;
        }
    else{
        std::cout << nom << " est disponible." << std::endl << std::endl;
    }

}

void Monstre::Attaque(Monstre &cible){
    if(_enForme = true){
        cible.Dommages(int Degats);
    }
    else{
        cout << nom << " a déjà attaqué ! " << endl;
    }
}

void Monstre::Dommages(int Degats){
    hp = hp-Degats;

    if (hp < 0)
    {
        hp = 0;
    }
}

bool Monstre::Mort()
{
    return pointDeVie == 0;
}

void Monstre::finTour(){
    _enForme = false;
    AffichageMonstre();
}

#endif