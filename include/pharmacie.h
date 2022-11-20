#ifndef PHARMACIE_H
#define PHARMACIE_H


#include<iostream>
#include<string>
#include<vector>
#include<produit.h>
#include "medicament.h"
#include "prodpara.h"
#include<patient.h>
#include"date.h"

using namespace std ;

class pharmacie
{

   string nomph ;
   string adresse ;
   vector <produit*> prod ;
   vector<patient*>cl ;
   public :
       pharmacie() ;
       ~pharmacie() ;
       void creer_ph1() ;
       void creer_ph2() ;
       void afficher_ph1() ;
       void afficher_ph2() ;

     void chercher_prod( produit  ) ;

       void ajouter_prod(produit*) ;
       void modifier_prod(int ) ;
       void supprimer_prod( int) ;
       void verifdate_prod() ;
       void chercher_pat( patient ) ;
       void modifier_pat( int ) ;
       void ajouter_pat( patient) ;
       void supprimer_pat( int ) ;
};


#endif // PHARMACIE_H
