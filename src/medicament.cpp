#include<iostream>
#include<istream>
#include<ostream>
using namespace std ;
#include "medicament.h"
#include"produit.h"
#include"pharmacie.h"

medicament:: medicament()
{
    forme=" " ;
    dosage=0 ;
    conserv=" ";
}
medicament::medicament(string f ,int d ,string co ,produit pr) : forme(f), dosage(d) ,conserv(co),produit(pr)
{
    //ctor
}
//***************************
/*void medicament:: saisirp()
{
    cout<<"medicament"<<endl ;
    istream& operator>>(istream&, produit&) ;
    cout<<"forme"<<endl ;
    cin>>forme;
    cout<<"dosage"<<endl ;
    cin>>dosage ;
    cout<<"conserv"<<endl ;
    cin>>conserv ;


}
//************************************
void medicament:: afficherp()
{
  ostream& operator<<(ostream&, produit&) ;
  cout<<"la forme est:"<<forme<<endl  ;
  cout<<"le dosage est :"<<dosage<<endl ;
  cout<<"la conservation est :"<<conserv<<endl ;

}*/

//***************************************
ostream& operator<<(ostream& out , medicament& m)
{
  ostream& operator<<(ostream& out, produit& m) ;
  cout<<"la forme est:"<<m.forme<<endl  ;
  cout<<"le dosage est :"<<m.dosage<<endl ;
  cout<<"la conservation est :"<<m.conserv<<endl ;
  return out ;


}
istream& operator>>(istream& in, medicament& m  )
{
    cout<<"medicament"<<endl ;
    istream& operator>>(istream& in, produit&m) ;
    cout<<"forme"<<endl ;
    cin>>m.forme;
    cout<<"dosage"<<endl ;
    cin>>m.dosage ;
    cout<<"conserv"<<endl ;
    cin>>m.conserv ;
    return in ;

}
//*******************************************

medicament::~medicament()
{
    //dtor
}




