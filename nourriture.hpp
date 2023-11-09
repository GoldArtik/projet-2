#pragma once
#include <iostream>
#include <string>

class nourriture
{
protected :

std::string nom;
int nbcalories;

public:
nourriture (const std::string& nom, int nbcalories);

std::string getNom() const;
int getCalories() const;
};
#include "nourriture.cpp"

 