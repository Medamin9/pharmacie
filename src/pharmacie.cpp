#include "pharmacie.h"
#include<algorithm>
#include<istream>
#include<ostream>
using namespace std ;



pharmacie ::pharmacie ()
{
    nomph="  " ;
    adresse="  " ;

    patient  *c= new patient ;
    cl.push_back(c);

}
//*******************************************************************
pharmacie ::~pharmacie ()
{
    for (int i=0 ;i<prod.size() ;i++ )
		delete prod[i] ;

	for (int j=0 ;j<cl.size() ;j++ )
		delete cl[j] ;
}

//****************************************************************************

void pharmacie :: creer_ph1()
{
    char rep ;
    int choix ;
     produit *p ;

    cout<<"nom pharmacie: "<< endl ;
    cin>>nomph  ;
    cout<<"adresse"<<endl ;
    cin >> adresse ;
    cout<<"remplissage tab de produit "<<endl ;
    do
    {
    cout<<"1: medicament , 2:produit paramedicaux "<<endl ;
    cin>>choix ;
    if (choix==1)  p=new medicament() ;
    else if(choix==2) p=new prodpara() ;
    else break ;
    //p->saisirp();
    cin>>*p ;
    prod.push_back(p);
    cout<<"rajoutez ?"<<endl ;
    cin>>rep ;
    }
    while(rep=='o') ;



}
//*******************************************************************************************
void pharmacie :: afficher_ph1()
{
	cout << "le nom de la pharmacie est" << nomph << endl ;
	cout << "l'adresse de la pharmacie est "<< adresse << endl ;
	cout <<"* la liste des produits *"<< endl ;
	for (int i=0 ;i<prod.size() ;i++ )
	{
		//prod[i]->afficherp();
        cout<<*prod[i];
		cout <<"---------- ----------- --------- ---------- --------- "<< endl ;
	}
	cout <<" ===== ======= ===== ===== ====== ====== ===== ===== "<< endl ;
	cout << endl ;

}
//******************************************************************************************************************************
void pharmacie ::creer_ph2()
{
    patient *pt ;
    char f ;
        cout<<"remplissage du tableau de patient"<<endl ;
    do
    {
         pt= new patient;
         //pt->saisir_pat();
         cin>>*pt ;
         cl.push_back(pt);
         cout<<"rajoutez ?"<<endl ;
         cin>>f ;
    }
    while(f=='o') ;


}
void pharmacie ::afficher_ph2()
{
    cout <<"* la liste des patient  *"<< endl ;
	for (int i=0 ;i<cl.size() ;i++ )
	{
		//cl[i]->afficher_pat();
		cout<<*cl[i] ;
		cout <<"---------- ----------- --------- ---------- --------- "<< endl ;
	}
}

//**************************************************************************

//***********************************************************************************************
void pharmacie ::chercher_prod(produit pr)
{

  int co ,b ;
     cout<<" donner le code "<<endl ;
     pr.setcodep(co);
     b=pr.getcodep() ;

     bool found = false;
    for (int i = 0; i<prod.size();i++)

        if ( (prod[i]->getcodep())==b)     found = true;



    if (found==false)    std::cout << "Element not found"<<endl ;
    else  std::cout << "Element  found" <<endl ;






}
//*****************************************************************************************************

void pharmacie :: ajouter_prod(produit* pr )
{
    int choix ;
    cout<<"voulez-vous ajouter 1:medicament ou 2:paramedicaux  ?"<<endl ;
    cin>>choix ;
    if(choix==1) pr=new medicament() ;
    else if(choix==2) pr=new prodpara() ;
    else cout<<" tapze le bon choix"<<endl ;
    //pr->saisirp() ;
    cin>>*pr ;
    prod.insert(prod.end(),pr) ;
}
//**************************************************************************************************
void pharmacie :: supprimer_prod(int i )
{
		delete prod[i] ;
		prod.erase(prod.begin()+i ) ;
}
//**************************************************************************************************
void pharmacie :: modifier_prod( int c)
{
	float pri ;
	string n ;
	cout<<"donner le code de produit"<<endl ;
	cin>>c ;
	for (int i=0 ;i<prod.size() ;i++ )
		{
		    if (prod[i]->getcodep()==c)
			{
				cout << " donner le nouveau nom "<< endl ;
				//cin >> n ;
				prod[i]->setnom(n) ;
				cout << " donner le nouveau prix "<< endl ;
				//cin >> pri ;
				prod[i]->setprix(pri ) ;
			}

		}
}

//**************************************************************************************************
void pharmacie :: chercher_pat(patient  pt )
{
    int c,r ;
    cout<<"donner le num de cin de patient cherche "<<endl ;
    pt.setncin(c) ;
    r=pt.getncin() ;
    bool res ;

    res=false ;
    for (int i = 0; i < cl.size();i++)

        if ( (cl[i]->getncin()) ==r) res=true ;



    if (res==false)   std::cout<< "Element not found"<<endl ;
    else  std::cout << "Element  found" <<endl ;


}

//*****************************************************************************************************

void pharmacie :: ajouter_pat(patient pt)
{
	patient  *r= new patient (pt) ;
     cl.insert(cl.end(),r) ;


}
//***************************************************************************************************


void pharmacie :: supprimer_pat(int i )
{
		delete cl[i] ;
		cl.erase(cl.begin()+i) ;
}
//*************************************************************************************************


//********************************************************************************************************




void pharmacie :: modifier_pat( int nc)
{
	int  t   ;
	string n , b ;
	cout<<"donner le num cin cherche"<<endl ;
	cin>>nc ;
	for (int i=0 ;i<cl.size() ;i++ )
    {
        if (cl[i]->getncin()== nc )
        {
                cout << " donner le nom"<<endl ;
                  cl[i]->setnom(n) ;
                  cout << " donner le   prenom"<<endl ;
                    cl[i]->setprenom(b) ;
				cout << " donner le nouveau numero de tel "<< endl ;

				    cl[i]->settel(t) ;
        }

    }
}
