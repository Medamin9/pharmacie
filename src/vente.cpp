#include<iostream>
#include "patient.h"
#include"date.h"
#include "lignecommandep.h"
#include<vector>
#include "vente.h"
#include<istream>
#include<ostream>
using namespace std ;


vente :: vente()
{
    patient pt ;
    date d ;
    total=0 ;
    pa=pt ;
    date_vente=d ;


}
vente::vente(patient pat,date da):pa(pat),date_vente(da)
{
}
//********************************
vente::vente(const vente& v)
{
    for(int i=0;i<v.tab.size();i++)
    {
      lignecommandep* l=new lignecommandep(*v.tab[i]) ;
      tab.push_back(l) ;
    }

}
//******************************************

/*void vente :: creer_vente()
{
   //pa.saisir_pat() ;
   cin>> pa ;
   cin>>date_vente ;
   char rep ;
   lignecommandep* l ;

    cout<<"*****************************"<<endl ;
   do
   {
     l=new lignecommandep() ;
     //l->creer_ligne() ;
     cin>>*l ;
     tab.push_back(l) ;
     cout<<" rajoutez?"<<endl ;
     cin>>rep ;
     cout<<"***********************************"<<endl ;

   }
   while(rep=='o') ;

}
//********************************************
void vente ::afficher_vente()
{
   //pa.afficher_pat() ;
   cout<< pa ;
   cout<<date_vente ;
   for(int i=0 ;i<tab.size();i++)
   {
       //tab[i]->afficher_ligne() ;
       cout<<*tab[i];
       cout<<"*********************"<<endl ;
   }
   total=calcul_total() ;
   cout<<"le total est :"<<total<<endl ;
}*/

//************************

ostream& operator<<(ostream&out , vente& v)
{
     //pa.afficher_pat() ;
   cout<< v.pa ;
   cout<<v.date_vente ;
   for(int i=0 ;i<v.tab.size();i++)
   {
       //tab[i]->afficher_ligne() ;
       cout<<*v.tab[i];
       cout<<"*********************"<<endl ;
   }
   v.total=v.calcul_total() ;
   cout<<"le total est :"<<v.total<<endl ;
   return out ;

}
istream& operator>>(istream&in, vente& v)
{
   //pa.saisir_pat() ;
   cin>> v.pa ;
   cin>>v.date_vente ;
   char rep ;
   lignecommandep* l ;

    cout<<"*****************************"<<endl ;
   do
   {
     l=new lignecommandep() ;
     //l->creer_ligne() ;
     cin>>*l ;
     v.tab.push_back(l) ;
     cout<<" rajoutez?"<<endl ;
     cin>>rep ;
     cout<<"***********************************"<<endl ;

   }
   while(rep=='o') ;
   return in ;
}

//**********************************************
void  vente ::supprimer_ligne(int i)
{
    //supprimer les lignes de commandes
  delete tab[i] ;
  // supprimer les adresses des lignes de commandes
  tab.erase(tab.begin()+i) ;
}
//*********************************************
void vente :: ajouter_ligne(lignecommandep* l,int i)
{
    tab.insert(tab.begin()+i,l) ;

}
//*********************************************
float vente ::calcul_total()
{
    total=0 ;
  for (int i=0;i<tab.size() ;i++)
    total+=tab[i]->getsoustotal() ;
  return total ;
}


//********************************************
vente::~vente()
{
   for(int i=0;i<tab.size();i++)
     delete tab[i] ;
   tab.clear() ;
}
