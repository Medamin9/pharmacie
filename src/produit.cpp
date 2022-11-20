#include<iostream>
#include<produit.h>
#include"date.h"
#include<istream>
#include<ostream>
using namespace std ;


produit :: produit()
{
    date d ;
    codep=0;
    prix=0;
    qte=0 ;
    nom='ali' ;
    date_premp=d;

}


/*produit::produit(int c,float p, int q ,string n ,date d) : codep(c) , prix(p),qte(q),nom(n),date_premp(d)
{
    //ctor
}*/
//****************************
/*void produit:: saisirp()
{
    cout<<"nom"<<endl ;
    cin>>nom;
    cout<<"codep"<<endl ;
    cin>>codep ;
    cout<<"prix"<<endl ;
    cin>>prix ;
    cout<<"qte"<<endl ;
    cin>>qte ;
    cout<<"la date"<<endl ;
    cin>>date_premp ;
}
//**********************************
void produit :: afficherp()
{
    cout<<"le code est:"<<codep<<endl ;
    cout<<"le prix est:"<<prix<<endl ;
    cout<<"la qte  est:"<<qte<<endl ;
    cout<<"le nom est:"<<nom<<endl ;
    cout<<date_premp;
}*/
//**************************************



ostream& operator<<(ostream& out , produit& pr)
{
    cout<<"le code est:"<<pr.codep<<endl ;
    cout<<"le prix est:"<<pr.prix<<endl ;
    cout<<"la qte  est:"<<pr.qte<<endl ;
    cout<<"le nom est:"<<pr.nom<<endl ;
    cout<<pr.date_premp;
    return out ;
}

istream& operator>>(istream&in, produit& pr)
{
    cout<<"nom"<<endl ;
    cin>>pr.nom;
    cout<<"codep"<<endl ;
    cin>>pr.codep ;
    cout<<"prix"<<endl ;
    cin>>pr.prix ;
    cout<<"qte"<<endl ;
    cin>>pr.qte ;
    cout<<"la date"<<endl ;
    cin>>pr.date_premp ;
    return in ;
}




//***************************************
int produit ::ajouter_qte(){
    int qteaj ;
    cout<<" saisir la quantite ajoute de ce produit"<<endl ;
    cin>>qteaj ;
    qte+=qteaj ;
    return qte ;

}
//****************************************
int produit :: supprimer_qte()
{
  int qtesp ;
  cout<<"saisir le qte retirer de ce produit " ;
  cin>>qtesp ;
  qte-=qtesp ;
  return qte ;
}
//************************************************

produit::~produit()
{
    //dtor
}

