
#include<iostream>
#include "lignecommandef.h"
#include"produit.h"
#include<istream>
#include<ostream>
using namespace std ;

lignecommandef :: lignecommandef()
{
    produit p ;
    qte_c=0 ;
    num_c=0 ;
    pr=p ;

}
lignecommandef::lignecommandef(int q,int n) :qte_c(q),num_c(n)
{
}
//*************************************
/*void  lignecommandef ::creer_lc()
{

   string n ;
 cout<<"saisir le num "<<endl ;
 cin>>num_c ;
 cout<<"saisir la qte commande  "<<endl ;
 cin>>qte_c ;
 cout<<"saisir le nom de produit commande "<<endl ;
  pr.setnom(n) ;
}
//************************************
void lignecommandef:: afficher_lc()
{
    string b ;
    cout<< " le num est :"<<num_c<<endl  ;
    cout<<"la qte commandé est:"<<qte_c<<endl ;
    b=pr.getnom() ;
    cout<<"le nom de produit est:"<< b<<endl ;


}*/

ostream& operator<<(ostream&out, lignecommandef& lf)
{
    string b ;
    cout<< " le num est :"<<lf.num_c<<endl  ;
    cout<<"la qte commandé est:"<<lf.qte_c<<endl ;
    b=lf.pr.getnom() ;
    cout<<"le nom de produit est:"<< b<<endl ;
    return out ;

}
istream& operator>>(istream& in, lignecommandef& lf)
{
    string n ;
    cout<<"saisir le num "<<endl ;
    cin>>lf.num_c ;
    cout<<"saisir la qte commande  "<<endl ;
    cin>>lf.qte_c ;
    cout<<"saisir le nom de produit commande "<<endl ;
    lf.pr.setnom(n) ;
    return in ;
}
//*************************************
lignecommandef::~lignecommandef()
{

}
