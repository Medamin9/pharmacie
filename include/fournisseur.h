#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H
#include<iostream>
#include<istream>
#include<ostream>
using namespace std ;
#include <patient.h>
using namespace std ;


class fournisseur : public patient
{
    string email ;
    public :
     fournisseur();
     fournisseur(patient,string);
     ~fournisseur() ;
     //void saisir_pat() ;
     //void afficher_pat() ;
     friend ostream& operator<<(ostream&, fournisseur&);
      friend  istream& operator>>(istream&, fournisseur&);

};

#endif // FOURNISSEUR_H
