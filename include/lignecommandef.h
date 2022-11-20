#ifndef LIGNECOMMANDEF_H
#define LIGNECOMMANDEF_H



#include<produit.h>
class lignecommandef
{

  produit pr ;
  int qte_c ;
  int num_c ;
  public :
      lignecommandef();
      lignecommandef(int , int );
      ~lignecommandef();
      //void creer_lc();
      //void afficher_lc() ;
      friend ostream& operator<<(ostream&, lignecommandef&);
     friend istream& operator>>(istream&, lignecommandef&);
};

#endif // LIGNECOMMANDEF_H
