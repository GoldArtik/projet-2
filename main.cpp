#include <iostream> 
#include "perso.hpp"
#include "sain.hpp"
#include "malsain.hpp"
#include "salledesport.hpp"
#include "jour.hpp"
#include "nourriture.hpp"
#include <string>


using namespace std;

int main()
{
    string nom ;
    int age, poids; //declaration variables joueur
    int calorieparjour= 2400;

 
    while (age < 18 || age>100)
    {
        //Introduction
        cout <<endl <<"\tVous allez commencer mon jeu."<< endl;
        cout <<"\tCe jeu coniste a simuler la prise ou perte de poids d'un joueur que vous aller cree par la suite."<< endl;
        cout <<"\tLa simulation durera un mois sois 30 jours."<< endl;
        cout <<"\tVous allez devoir effectuer des choix tout au long du jeu pour maintenir votre personage en forme ou pas ..."<< endl;
        cout <<"\tLes choix consiterons a choisir votre alientation et la frequence a laquel vous aller a la salle de sport"<< endl<<endl ;


        //Debut du jeu 
        cout <<"Veuillez Entrez Votre nom age et poids pour le debut de la simulation : "<< endl; 
        cin >> nom ; //recuperation nom utilisateur
        cin >> age ; //recuperation Age utilisateur
        cin >> poids ; //recuperation nom utilisateur
    }


    perso Joueur(nom,age,poids); //Joueur

    salledesport salle("Perte de poids 2000",0); //nom de la salle

    //nourriture saine
    nourrituresaine saladecesar("salade Cesar",150);
    nourrituresaine ratatouille("Ratatouille Steak",305); 
    nourrituresaine lentillesaucisse("Lentille Saucisse",245);
    nourrituresaine haricotlardon("Haricots Lardon",320);
    nourrituresaine saldegesier("salade de gesiers",500);

    //nourriture malsaine
    nourrituremalsaine hamburgerfrite("Hamburger Frite",1120);
    nourrituremalsaine steakFrite("Steak Frite",940);
    nourrituremalsaine raclette("Raclette",1500);
    nourrituremalsaine pizza("Pizza",1064);
    nourrituremalsaine tacos("Tacos",1350);

    //exercice salle de sport 
    salledesport developcoucher("Develloper couché",351);
    salledesport tapis("Tapis de course",574);
    salledesport legpresse("Leg presse",406);
    salledesport curl("Curl biceps",400);
    salledesport poulie("Poulie a tirage vertcale",284);


    //test
    jour test("test");

    Joueur.afficher();
    salle.afficher1();
    developcoucher.afficher();

    test.nbjour();

    

return 0;
}