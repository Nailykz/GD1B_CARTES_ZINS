#include "Mage.h"
#include "Monstre.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Mage::Mage() {
    listeMonstre[0] = "";
    listeMonstre[1] = "";
    listeMonstre[2] = "";
    listeHP[0] = 0;
    listeHP[1] = 0;
    listeHP[2] = 0;
    listeAtk[0] = 0;
    listeAtk[1] = 0;
    listeAtk[2] = 0;
}

Mage::Mage(std::string nom, int hp) : nomMage(nom), hpMage(hp){
    listeMonstre[0] = "";
    listeMonstre[1] = "";
    listeMonstre[2] = "";
    listeHP[0] = 0;
    listeHP[1] = 0;
    listeHP[2] = 0;
    listeAtk[0] = 0;
    listeAtk[1] = 0;
    listeAtk[2] = 0;
}

void Mage::AffichageMage(){
    cout << nomMage << " : HP = " << hpMage << endl;
    if (hpMage == 0){
        cout << nomMage << " est mort !" << endl;
    }
    else {
        for (int i(0); i<3;i++){
            cout << listeMonstre[i] ;
        } 
    }
}

void Mage::Invoquer(){
    string m_nom;
    int m_pv;
    int m_atk;
    cout << "Nom du monstre : " ;
    cin >> m_nom ;

    cout << "Points de vie : " ;
    cin >> m_pv;

    cout << "Points d'attaque : " ;
    cin >> m_atk;

    if (listeMonstre[0] == ""){
        listeMonstre[0] = m_nom;
        listeHP[0] = m_pv;
        listeAtk[0] = m_atk;
    }
    else {
        if (listeMonstre[1] == ""){
            listeMonstre[1] = m_nom;
            listeHP[1] = m_pv;
            listeAtk[1] = m_atk;
        }
        else {
            if (listeMonstre[2] == ""){
                listeMonstre[2] = m_nom;
                listeHP[2] = m_pv;
                listeAtk[2] = m_atk;
            }
            else {
                cout << "Trop de monstres sur votre terrain...";
            }
        }
    }
    


}

void Mage::Attaquer(Mage &cible , Monstre &defense){

    int input;
    cout << "Quel monstre attaquera ? (Chiffre à entrer) ";
    cin >> input;
    Monstre Attaquant(listeMonstre[input],listeHP[input], listeAtk[input],true);
    Attaquant.Attaque(defense);
}

void Mage::AttaqueMage(Mage &cible, int degatsMonstre){
    cible.DommagesSubis(degatsMonstre);
}

void Mage::DommagesSubis(int degatsSubis){
    hpMage -= degatsSubis;

    if (hpMage < 0)
    {
        hpMage = 0;
    }
}
