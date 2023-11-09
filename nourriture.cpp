#include <stdio.h> 
#include "nourriture.hpp"

using namespace std;

nourriture::nourriture(const string& nom , int nbcalories) : nom(nom), nbcalories(nbcalories){}

string nourriture::getNom() const
{
    return nom;
}

int nourriture::getCalories() const
{
    return nbcalories;
}

