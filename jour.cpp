#include <stdio.h> 
#include "jour.hpp"

using namespace std;

jour::jour(): m_jour("Inconnu"){} // Constructeur sans attribut

jour::jour(string jour) // Constructeur ave attribut
{
    m_jour = jour;
}

void jour::nbjour() const // Méthode pour afficher les informations du Joueur
{
    int nbjour;

    cout<< "Jour : "<<nbjour << endl ;
    nbjour++;

    cout << "" << endl ;
}
