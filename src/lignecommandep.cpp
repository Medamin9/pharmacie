#include<iostream>
#include<string>
#include "lignecommandep.h"
#include "produit.h"
#include<istream>
#include<ostream>

using namespace std ;

lignecommandep :: lignecommandep()
{
    produit pp ;
    p=pp ;
    numv=0;
    soustotal=0;
    qtev=0 ;


}
lignecommandep::lignecommandep(int nu,int q,produit po,float st) : numv(nu),qtev(q) ,p(po), soustotal(st)
{
}
/*void lignecommandep:: creer_ligne()
{
string n ;
  cout<<"saisir le num de ligne"<<endl ;
  cin>>numv ;
  cout<<"saisir la qte vendu "<<endl ;
  cin>>qtev ;
  cout<<"saisir le nom de produit vendu"<<endl;

  p.setnom(n);
  cout<<"calcul de sous total "<<endl ;
  soustotal=calcul_soustotal();

}
void lignecommandep:: afficher_ligne()
{
    string n ;
  cout<<"le num est:"<<numv<<endl ;
  cout<<"la qte vendu  est:"<<qtev<<endl ;
  cout<<"le nom de produit  est:"<<p.getnom()<<endl ;

  cout<<"le sous total  est:"<<soustotal<<endl ;
}*/

ostream& operator<<(ostream& out, lignecommandep&lc)
{
  string n ;
  cout<<"le num est:"<<lc.numv<<endl ;
  cout<<"la qte vendu  est:"<<lc.qtev<<endl ;
  cout<<"le nom de produit  est:"<<lc.p.getnom()<<endl ;
  cout<<"le sous total  est:"<<lc.soustotal<<endl ;
  return out ;

}
istream& operator>>(istream& in, lignecommandep& lc)
{
  string n ;
  cout<<"saisir le num de ligne"<<endl ;
  cin>>lc.numv ;
  cout<<"saisir la qte vendu "<<endl ;
  cin>>lc.qtev ;
  cout<<"saisir le nom de produit vendu"<<endl;

  lc.p.setnom(n);
  cout<<"calcul de sous total "<<endl ;
  lc.soustotal=lc.calcul_soustotal();
  return in ;
}






float lignecommandep::calcul_soustotal()
{
    float nouvpr ;

   cout<<"donner le prix"<<endl ;
   //cin>> nouvpr ;
   p.setprix(nouvpr);
   soustotal=(p.getprix()*qtev) ;
   return soustotal ;
}
lignecommandep::~lignecommandep()
{
    //dtor
}
