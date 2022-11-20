#ifndef DATE_H
#define DATE_H


using namespace std ;

class date
{
    protected :
    int mois ;
    int jour ;
    int annee ;
public :
    date();
    date(int,int,int) ;
    ~date(void) ;
    //void saisir_date() ;
    //void afficher_date() ;
    int getjour(){return jour ;}
    int getmois(){ return mois;}
    int getannee(){ return annee ;}
    friend ostream& operator<<(ostream&, date&);
    friend istream& operator>>(istream&, date&);

};
#endif // DATE_H
