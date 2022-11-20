#ifndef ACHAT_H
#define ACHAT_H


#include<string>
#include <vector>
#include"fournisseur.h"
#include"lignecommandef.h"

class achat
{

   date date_c ;
   fournisseur f ;

   vector<lignecommandef*> t ;
   public :
       achat();
       achat(date , fournisseur) ;
       ~achat() ;
       achat(const achat&);
       //void creer_achat() ;
       //void afficher_achat() ;
       friend ostream& operator<<(ostream&, achat&);
       friend istream& operator>>(istream&, achat&);
       void ajouter_lc(lignecommandef* , int) ;
       void supprimer_lc(int) ;

};

#endif // ACHAT_H
