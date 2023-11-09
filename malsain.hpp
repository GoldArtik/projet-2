#ifndef malsain_hpp 
#define malsain_hpp
#include <iostream>
#include <string>

class nourrituremalsaine
{
protected:
std::string m_nomnourrituremalsaine; // Class nourrituremalsaine
int m_calories ;

public:
nourrituremalsaine();
nourrituremalsaine(std::string nomnourrituremalsaine, int calories);

virtual void afficher() const; 


};
#include "malsain.cpp"
#endif