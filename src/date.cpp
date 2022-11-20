#include<iostream>
#include "date.h"
#include<istream>
#include<ostream>
using namespace std ;

date :: date()
{
    jour=0 ;
    mois=0;
    annee=0 ;
}
date ::date (int m,int j ,int a)
{
   mois =m ;
   jour =j ;
   annee=a ;
}
/*void date:: saisir_date()
{
    cout<<"saisir la date "<<endl ;
    cin>>mois>> jour>>annee ;

}
void date :: afficher_date()
{
  cout<<"la date est:"<<mois<<"/"<<jour<<"/"<<annee<<endl ;
}*/

ostream& operator<<(ostream& out , date& d)
{
    cout<<"la date est:"<<d.mois<<"/"<<d.jour<<"/"<<d.annee<<endl ;
    return out ;
}

istream& operator>>(istream&in, date& d)
{
     cout<<"saisir la date "<<endl ;
    cin>> d.mois>> d.jour>>d.annee ;
    return in ;
}



date ::~date ()
{
    //dtor
}
