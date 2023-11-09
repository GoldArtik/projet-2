#include <stdio.h> 
#include "perso.hpp"

using namespace std;

perso::perso(): m_nomperso("Inconnu"), m_poids(0){} // Constructeur sans attribut

perso::perso(string nomperso, int age, int poids) // Constructeur avec attribut
{
    m_nomperso = nomperso;
    m_poids = poids;
    m_age = age;
}

void perso::afficher() const // Méthode pour afficher les informations du Joueur
{
    cout <<"----------------------------------" << endl;
    cout << "Nom Joueur : "<<m_nomperso << "\t Poids: " << m_poids << endl;
    cout << "Age : "<<m_age << endl;
    cout <<"----------------------" << endl;
}

