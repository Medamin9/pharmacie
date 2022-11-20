#ifndef PRODPARA_H
#define PRODPARA_H

#include <produit.h>



class prodpara : public produit
{
    int refe ;
public :
    prodpara();
    prodpara(produit,int);
    ~prodpara() ;
    //void saisirp();
    //void afficherp() ;
    friend ostream& operator<<(ostream&, prodpara&);
    friend istream& operator>>(istream&, prodpara&);
    int setref(int r){cin>> r;}

};


#endif // PRODPARA_H
