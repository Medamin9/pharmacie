


#include<iostream>
#include<istream>
#include<ostream>
#include<string>
#include <vector>
#include"fournisseur.h"
#include"lignecommandef.h"
#include"lignecommandep.h"
#include "achat.h"
#include"date.h"
using namespace std ;

achat :: achat()
{
   fournisseur fo ;
   date d ;
   date_c=d ;
   f=fo ;

}

achat::achat(date d,fournisseur fo)
{
   date_c=d ;
   f=fo ;
}
//******************************************
achat ::achat(const achat&w)
{
    for(int i=0 ;i<t.size();i++)
        {lignecommandef* lf = new lignecommandef(*w.t[i]) ;
        t.push_back(lf);
        }
}
//******************************************
/*void achat ::creer_achat()
{
    cin>>date_c ; ;
    //f.saisir_pat();
    cin>>f ;
    char rep ;
    lignecommandef* lf ;
    do
    {
        lf=new lignecommandef ;
        //lf->creer_lc() ;
        cin>>*lf ;
        t.push_back(lf);
        cout<<"rajoutez"<<endl ;
        cin>>rep ;
        cout<<"*******************************"<<endl ;

    }
    while(rep=='o') ;
}
//*********************************
void achat ::afficher_achat()
{
    cout<<date_c;
    //f.afficher_pat() ;
    cout<<f ;
    cout<<endl ;
    cout<<"++++++++++++++++++++++"<<endl ;
    for(int i=0;i<t.size();i++)
        //t[i]->afficher_lc() ;
        cout<<*t[i] ;
    cout<<"***************************"<<endl ;

}*/

//***************************************

ostream& operator<<(ostream& out, achat& a)
{
    cout<<a.date_c;
    //f.afficher_pat() ;
    cout<<a.f ;
    cout<<endl ;
    cout<<"++++++++++++++++++++++"<<endl ;
    for(int i=0;i<a.t.size();i++)
        //t[i]->afficher_lc() ;
        cout<<*a.t[i] ;
    cout<<"***************************"<<endl ;
    return out ;

}
istream& operator>>(istream& in, achat& a)
{
    cin>>a.date_c ; ;
    //f.saisir_pat();
    cin>>a.f ;
    char rep ;
    lignecommandef* lf ;
    do
    {
        lf=new lignecommandef ;
        //lf->creer_lc() ;
        cin>>*lf ;
        a.t.push_back(lf);
        cout<<"rajoutez"<<endl ;
        cin>>rep ;
        cout<<"*******************************"<<endl ;
        }
    while(rep=='o') ;
    return in ;

}
//************************************
// ajouter une ligne de commande _fournisseur
void achat:: ajouter_lc(  lignecommandef* lf , int i)
{
    t.insert(t.begin()+i,lf) ;

}
//******************************************
//supprimer une ligne de commande _fournisseur
void achat ::supprimer_lc(int ind)
{
   delete t[ind] ;
   t.erase(t.begin()+ind) ;

}

//************************************************
achat::~achat()
{
   for(int i=0;i<t.size();i++)
     delete t[i] ;
   t.clear() ;
}
