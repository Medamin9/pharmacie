#include<iostream>
#include<string>
#include<istream>
#include<ostream>
using namespace std ;
#include "fournisseur.h"
using namespace std ;
fournisseur :: fournisseur()
{
    email="  ";

}
fournisseur::fournisseur(patient pa,string ad) : patient(pa), email(ad)
{
    //ctor
}
//***************************************
/*void fournisseur ::saisir_pat() {
   //patient:: saisir_pat() ;
   istream& operator>>(istream&, patient&);
   cout<<" l'email"<<endl ;
    cin>> email ;
}
//*******************************
void fournisseur :: afficher_pat()
{
    //patient::afficher_pat() ;
    ostream& operator<<(ostream&, patient&);
    cout<< "l'email est :"<<email ;
}*/

ostream& operator<<(ostream& out, fournisseur& f)
{
    //patient::afficher_pat() ;
    ostream& operator<<(ostream& out, patient& f);
    cout<< "l'email est :"<<f.email ;
    return out ;

}
istream& operator>>(istream& in, fournisseur&f)
{
    //patient:: saisir_pat() ;
   istream& operator>>(istream& in, patient& f);
   cout<<" l'email"<<endl ;
    cin>> f.email ;
    return in ;

}




fournisseur::~fournisseur()
{
    //dtor
}
