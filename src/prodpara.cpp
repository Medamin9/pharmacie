#include<iostream>
#include"produit.h"
#include "prodpara.h"
#include<istream>
#include<ostream>
using namespace std ;


prodpara :: prodpara()
{
    refe=0 ;
}
prodpara::prodpara(produit p , int r) : produit(p),refe(r)
{
    //ctor
}
//*************************************
/*void prodpara::saisirp()
{
   cout<<"produit paramedicaux"<<endl ;
   istream& operator>>(istream&, produit&) ;
   cout<<"la reference "<<endl ;
   cin>>refe ;

}
//******************************
void prodpara :: afficherp()
{
  ostream& operator<<(ostream&, produit&) ;
   cout<< "le reference est:"<<refe<<endl ;
}*/

ostream& operator<<(ostream& out, prodpara& p)
{
   ostream& operator<<(ostream& out, produit&p) ;
   cout<< "le reference est:"<<p.refe<<endl ;
   return out;
}
istream& operator>>(istream& in, prodpara&p)
{
   cout<<"produit paramedicaux"<<endl ;
   istream& operator>>(istream& in, produit& p) ;
   cout<<"la reference "<<endl ;
   cin>>p.refe ;
   return in ;

}





prodpara::~prodpara()
{
    //dtor
}
