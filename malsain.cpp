#include <stdio.h> 
#include "malsain.hpp"

using namespace std;

nourrituremalsaine::nourrituremalsaine(): m_nomnourrituremalsaine("Inconnu"), m_calories(0){} // Constructeur sans attribut

nourrituremalsaine::nourrituremalsaine(string nomnourrituremalsaine, int calories) // Constructeur ave attribut
{
    m_nomnourrituremalsaine = nomnourrituremalsaine;
    m_calories = calories;
}

void nourrituremalsaine::afficher() const // Méthode pour afficher les informations du Joueur
{
    cout <<m_nomnourrituremalsaine<< "\tcontient : " <<m_calories<<" calories" <<endl; 
} 