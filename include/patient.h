#ifndef PATIENT_H
#define PATIENT_H
#include<iostream>
using namespace std ;

#include<string>

class patient
{

 protected :
     string nom ;
     string prenom ;
     int tel ;
     int ncin ;
 public :
    patient();
    patient(string,string,int,int) ;
    virtual ~patient() ;
    //virtual void saisir_pat() ;
    //virtual void afficher_pat() ;
    friend ostream& operator<<(ostream&, patient&);
    friend istream& operator>>(istream&, patient&);
    string getnom(){return nom ;}
    string getprenom(){return prenom ;}
    int gettel(){return tel ;}
    void setncin(int ){ cin>> ncin ;}
    int getncin(){ return ncin ;}

    void setnom(string ){cin>> nom ;}
    void setprenom(string ){cin>> prenom ;}
    void settel(int ){cin>> tel ;}

};
#endif // PATIENT_H
