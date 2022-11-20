#ifndef MEDICAMENT_H
#define MEDICAMENT_H

#include "produit.h"
class medicament : public produit
{
    string forme ;
    int dosage ;
    string conserv ;
public :

    medicament();
    medicament(string,int,string,produit) ;
    ~medicament() ;
    //void saisirp();
    //void afficherp();
    friend ostream& operator<<(ostream&, medicament&);
    friend istream& operator>>(istream&, medicament&);

    string setforme(string f){ cin>> f ;}
    int setdosage(int d){ cin>> d;}
    string setconsev(string c){ cin>> c;}
};


#endif // MEDICAMENT_H
