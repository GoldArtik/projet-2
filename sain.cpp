#include <stdio.h> 
#include "sain.hpp"

using namespace std;

nourrituresaine::nourrituresaine(): m_nomnourrituresaine("Inconnu"), m_calories(0){} // Constructeur sans attribut

nourrituresaine::nourrituresaine(string nomnourrituresaine, int calories) // Constructeur ave attribut
{
    m_nomnourrituresaine = nomnourrituresaine;
    m_calories = calories;
}

void nourrituresaine::afficher() const // Méthode pour afficher les informations du Joueur
{
    cout <<m_nomnourrituresaine<< "\tcontient : " <<m_calories<<" calories" <<endl; 
}

