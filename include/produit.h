#ifndef PRODUIT_H
#define PRODUIT_H



#include<iostream>
#include<ostream>
#include<istream>
using namespace std ;
#include"date.h"
#include<string>
class produit
{
protected :
    int codep ;
    float prix ;
    int qte ;
    string nom ;
    date date_premp ;
public :
    produit();
   //produit(int,float,int,string,date) ;
    virtual ~produit() ;
    //virtual void saisirp();
    //virtual void afficherp() ;
    int ajouter_qte() ;
    int supprimer_qte() ;
    friend ostream& operator<<(ostream&, produit&);
    friend istream& operator>>(istream&, produit&);


     void setcodep( int ){ cin>>codep ;}
     int getcodep(){ return codep;}
    int getqte(){return qte ;}
    float getprix(){return prix ;}
    void setprix( float){cin>>prix ;}
    string getnom(){return nom ;}
    void setnom( string){cin>>nom ;}
    date getdate(){ return date_premp;}



};


#endif // PRODUIT_H
