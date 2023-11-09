#ifndef perso_hpp 
#define perso_hpp
#include <iostream>
#include <string>

class perso
{
protected:
std::string m_nomperso; // Nom du perso
int m_poids;
// Niveau de vie du héros
int m_age; // Nom de l'arme
int m_puissancearme; // Puissance de l'arme
public:
perso();
perso(std::string nomperso, int age, int poids);

virtual void afficher() const; 



};
#include "perso.cpp"
#endif

