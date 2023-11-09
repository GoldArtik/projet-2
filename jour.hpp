#ifndef jour_hpp 
#define jour_hpp
#include <iostream>
#include <string>

class jour
{
protected:
std::string m_jour; // Class nourriturejoure


public:
jour();
jour(std::string jour);

virtual void nbjour() const; 

};
#include "jour.cpp"
#endif

 