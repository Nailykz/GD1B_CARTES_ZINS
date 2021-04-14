#include "Mage.cpp"
#include <iostream>
#include <string>

using namespace std;

int main(){

    Mage Joueur1 ("Magito Number One", 10);
    Mage Joueur2 ("Magito Pas Number One", 10);

    Joueur1.AffichageMage();
    Joueur2.AffichageMage();

    cout << "Le joueur 1 invoque un monstre pour l'aider au combat ! " << endl;
    Joueur1.Invoquer();
    Joueur1.AffichageMage();
    cout << "Le joueur 2 invoque un monstre pour l'aider au combat ! "  << endl;
    Joueur2.Invoquer();
    Joueur2.AffichageMage();

    cout << "Le joueur 1 s'empresse d'attaquer ! " << endl;
    Joueur1.AttaqueMage(Joueur2,2);
    Joueur2.AffichageMage();

    cout << "Le joueur 2 attaque un monstre ! " << endl;

    return 0;
}