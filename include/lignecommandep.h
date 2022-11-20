#ifndef LIGNECOMMANDEP_H
#define LIGNECOMMANDEP_H

#include"produit.h"

class lignecommandep
{

// chaque ligne commande possed le nom de produit , un num , la qte vendu de chaque produit
// et le soustotal(prix de chaque produit*qte vendu)

    produit p;
    int numv ;
    float soustotal ;
    int qtev;

   public :
    lignecommandep();
    lignecommandep(int,int,produit,float);
    ~lignecommandep();
    //void creer_ligne() ;
    //void afficher_ligne() ;
    friend ostream& operator<<(ostream&, lignecommandep&);
    friend istream& operator>>(istream&, lignecommandep&);
    float calcul_soustotal() ;
    float getsoustotal(){return soustotal ;}


};


#endif // LIGNECOMMANDEP_H
