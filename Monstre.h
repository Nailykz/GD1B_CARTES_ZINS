#ifndef MONSTRE_H
#define MONSTRE_H
#include <iostream>
#include <string>
#include <vector>

class Monstre
{
    private:
    std::string nom;
    int hp;
    int score_Attaque;
    bool _enForme;
    int pointDeVie; 

    public :
    Monstre();
    Monstre(std::string nom, int hp, int score_Attaque, bool epuise);
    void AffichageMonstre();
    void Attaque(Monstre &cible); 
    void Dommages(int Degats);
    bool Mort();
    void finTour();
    
};

#endif