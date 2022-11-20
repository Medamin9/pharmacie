#include<iostream>
#include<string>
#include "patient.h"
#include<istream>
#include<ostream>
using namespace std ;


patient :: patient()
{
    nom="  ";
    prenom="  ";
    tel=0 ;
    ncin=0;
}
patient::patient(string n ,string p,int t,int c) : nom(n),prenom(p),tel(t),ncin(c)
{
    //ctor
}
//***********************************
/*void patient :: saisir_pat()
{
   cout<<"nom"<<endl ;
    cin>>nom;
   cout<<"prenom"<<endl ;
   cin>>prenom ;
   cout<<"tel"<<endl ;
   cin>>tel  ;
   cout<<"le numero de cin"<<endl ;
   cin>>ncin ;
}
//**************************************
void patient ::afficher_pat()
{
    cout<<"le nom est:"<<nom<<endl ;
    cout<<"le prenom est:"<<prenom<<endl ;
    cout<<"le num de tel  est:"<<tel<<endl ;
    cout<<"le num de cin est:"<<ncin<<endl ;


}*/

ostream& operator<<(ostream&out, patient& pa)
{
    cout<<"le nom est:"<< pa.nom<<endl ;
    cout<<"le prenom est:"<<pa.prenom<<endl ;
    cout<<"le num de tel  est:"<<pa.tel<<endl ;
    cout<<"le num de cin est:"<<pa.ncin<<endl ;
    return out ;


}
istream& operator>>(istream& in, patient& pa)
{
   cout<<"nom"<<endl ;
    cin>>pa.nom;
   cout<<"prenom"<<endl ;
   cin>>pa.prenom ;
   cout<<"tel"<<endl ;
   cin>>pa.tel  ;
   cout<<"le numero de cin"<<endl ;
   cin>>pa.ncin ;
   return in ;
}








patient::~patient()
{
    //dtor
}
