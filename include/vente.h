#ifndef VENTE_H
#define VENTE_H
#include<vector>
#include"patient.h"
using namespace std ;

class vente
{
   patient pa ;
   date date_vente ;
   float total ;

   vector<lignecommandep*> tab ;
   public :
       vente();
       vente(patient ,date ) ;
       ~vente() ;
       vente(const vente&) ;
       //void creer_vente() ;
       //void afficher_vente() ;
       friend ostream& operator<<(ostream&, vente&);
        friend istream& operator>>(istream&, vente&);
       void ajouter_ligne(lignecommandep*,int) ;
       void supprimer_ligne(int) ;
       float calcul_total() ;




       //void modifier_ligne() ;

};


#endif // VENTE_H
