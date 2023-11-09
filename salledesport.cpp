#include <stdio.h> 
#include "salledesport.hpp"

using namespace std;

salledesport::salledesport(): m_nomsalledesport("Inconnu"){} // Constructeur sans attribut

salledesport::salledesport(string nomsalledesport, int caloriesdepenser) // Constructeur avec attribut
{
    m_nomsalledesport = nomsalledesport;
    m_caloriesdepenser = caloriesdepenser;
}

void salledesport::afficher1() const // Méthode pour afficher les informations du Joueur
{
    cout << "Perte de poids 2000"  << endl;
}

void salledesport::afficher() const // Méthode pour afficher les informations du Joueur
{
    cout << "test"  << endl;
}