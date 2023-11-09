#ifndef salledesport_hpp 
#define salledesport_hpp
#include <iostream>
#include <string>

class salledesport
{
protected:
std::string m_nomsalledesport; // Nom du salledesport
int m_caloriesdepenser;

public:
salledesport();
salledesport(std::string nomsalledesport, int caloriesdepenser);

virtual void afficher1() const; 
virtual void afficher() const; 



};
#include "salledesport.cpp"
#endif

