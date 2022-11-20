#include <iostream>
#include"date.h"
#include"produit.h"
#include"medicament.h"
#include"prodpara.h"
#include"patient.h"
#include"fournisseur.h"
#include"lignecommandep.h"
#include"vente.h"
#include"lignecommandef.h"
#include"achat.h"
#include"pharmacie.h"
#include<vector>
using namespace std;

int main()
// hed main tajribi mche bih
{
   /* cout<<"class date" <<endl;
    cout << "Hello world!" << endl;
    date d(0,0,0) ;
    d.saisir_date();
    d.afficher_date();
    cout<<endl<<endl;

    cout<<"class produit" <<endl;
    produit p ;
    p.saisirp();
    p.afficherp();
    cout<<endl<<endl;

    cout<<"class medicament" <<endl;
    medicament m ;
    m.saisirp();
    m.afficherp();
    cout<<endl<<endl;

    cout<<"class prodpara" <<endl;
    prodpara pr ;
    pr.saisirp();
    pr.afficherp();
    cout<<endl<<endl;

    cout<<"class patient" <<endl;
    patient pt ;
    pt.saisir_pat();
    pt.afficher_pat();
    cout<<endl<<endl;


    cout<<"class fournisseur" <<endl;
    fournisseur f ;
    f.saisir_pat();
    f.afficher_pat();
    cout<<endl<<endl;

    cout<<"class ligne commandep" <<endl;
    lignecommandep lc ;
    lc.creer_ligne();
    lc.afficher_ligne();
    lc.calcul_soustotal();
    lc.getsoustotal();
    cout<<endl<<endl;

     cout<<"class ligne vente" <<endl;
    vente v ;
    lignecommandep l ;
    v.creer_vente();
    v.afficher_vente();
    v.ajouter_ligne(&l , 1);
    v.supprimer_ligne( 1);
    v.calcul_total();
    //v.modifier_ligne();
    cout<<endl<<endl;

    cout<<"class ligne lignecommandef" <<endl;
    lignecommandef lf ;
    lf.creer_lc();
    lf.afficher_lc();
    cout<<endl<<endl;

    cout<<"class  achat" <<endl;
    vector<lignecommandef> ll ;
    achat a ;
    a.creer_achat();
    a.afficher_achat();
    //a.ajouter_lc(&ll, 2);
    a.supprimer_lc(2);
    cout<<endl<<endl;


    cout<<"class pharmacie" <<endl;
    pharmacie ph ;
    ph.creer_ph();
    ph.afficher_ph();
    ph.ajouter_pat( pt);
    ph.ajouter_prod(pr);
    ph.chercher_pat(pt);
    ph.chercher_prod(pr);
    ph.modifier_pat(1);
    ph.modifier_prod(1);
    ph.supprimer_pat(1);
    ph.supprimer_prod(1) ; */



    // bil main heda y3mil execution ama yoo5rej ki tenzel 3ala 3dad





   int menu;
   pharmacie ph ;

   patient pt ;
   produit pr ;


        ph.creer_ph1() ;
        ph.afficher_ph1() ;
        ph.creer_ph2() ;

       ph.afficher_ph2() ;

		cout<<"\t\t\t    Pharmacy Management System \n";
		cout<<"\t\t==================================================\n\n";
		cout<<"\t\t--------------------------------------------------\n";
		cout<<"\t\t||\t1. Ajouter un Patient  \t\t ||\n";
		cout<<"\t\t||\t2. Modifier un Patient \t\t ||\n";
		cout<<"\t\t||\t3. chercher un Patient \t\t\t ||\n";
		cout<<"\t\t||\t4. Supprimer un Patient \t ||\n";
		cout<< endl ;
		cout<<"\t\t||\t5. Ajouter un produit \t\t ||\n";
		cout<<"\t\t||\t6. Modifier un produit \t\t ||\n";
		cout<<"\t\t||\t7. Chercher un produit \t\t ||\n";
		cout<<"\t\t||\t8. Supprimer un produit \t\t ||\n";
		cout<< endl ;

		cout<<"\t\t--------------------------------------------------\n";
    do{
             	cout<<"Entrer votre choix : ";
                 cin>>menu;



		switch (menu)
		{
		    case 1:
			{
			    int i ;
			    cin>>pt ;
			    //pt.saisir_pat() ;
				ph.ajouter_pat(pt) ;	//ajouter un patient

				ph.afficher_ph2() ;
				break;
			}


		   case 2:
			{
				int nc ;
				ph.modifier_pat( nc) ;	//modifier patientb
				ph.afficher_ph2() ;

				break;
			}

		   case 3:
			{
				ph.chercher_pat(pt) ;	//chercher patient


				break;
			}

		   case 4:
			{
				int r ;
				cout<<"donner la position"<<endl ;
				cin>>r ;


				ph.supprimer_pat( r) ;	//supprimer patintf
				ph.afficher_ph2() ;

				break;
			}
		   case 5:
			{
                int po ;
				ph.ajouter_prod(&pr) ;	//ajouter un produit
				ph.afficher_ph1() ;

				break;
			}
          case 6:
			{
				int c ;
				ph.modifier_prod(c) ;	//modifier un produit
				ph.afficher_ph1() ;
				break;
			}
          case 7 :
		   	{

				 ph.chercher_prod(pr) ;

				break;
			}
		  case 8:
			{
				int r ;
				cout<<"donner la position"<<endl ;
				cin>>r ;
				ph.supprimer_prod(r) ;	//supprimer un produit
				ph.afficher_ph1() ;
				break;
			}


		  default:
			{
				cout<<"You enter invalid input\nre-enter the input\n"<<endl;
				break;
			}
         }
    }
    while(menu!=0 || menu <=8) ;


    /*    vente v ;
         int n ;
         lignecommandep l ;
         cout<<"creez vente"<<endl ;
    v.creer_vente();
    v.afficher_vente();



       cout<<"\t\t||\t1. Ajouter un ligne \t\t ||\n";
		cout<<"\t\t||\t2. supprimer  un ligne  \t\t ||\n";

		cout<<"--------------------------------------------"<<endl ;
       do
       {
            cout<<"entrer votre choix "<<endl ;
            cin>>n ;
            switch(n)
            {
              case 1 :
                {
                     int p ;
                     l.creer_ligne() ;
                     cout<<"donner la position"<<endl ;
                     cin>>p ;
                       v.ajouter_ligne(&l , p);
                        v.afficher_vente();
                       break ;

                }
                cout<<"*************************"<<endl ;

              case 2 :
                {
                    int pos ;
                    cout<<"donner la position"<<endl ;
                    cin>>pos ;
                     v.supprimer_ligne( pos);
                      v.afficher_vente();

                }
            }
       }
       while(n!=0 && n<2 ); */





   /* achat a ;
    a.creer_achat();
    a.afficher_achat();
    lignecommandef f ;
    int n ;



       cout<<"\t\t||\t1. Ajouter un ligne \t\t ||\n";
		cout<<"\t\t||\t2. supprimer  un ligne  \t\t ||\n";

		cout<<"--------------------------------------------"<<endl ;
		 do
       {
            cout<<"entrer votre choix "<<endl ;
            cin>>n ;
            switch(n)
            {
              case 1 :
                {
                     int p ;
                     f.creer_lc() ;
                     cout<<"donner la position"<<endl ;
                     cin>>p ;
                        a.ajouter_lc(&f , p);
                        a.afficher_achat();
                       break ;

                }
                cout<<"***************************"<<endl ;

              case 2 :
                {
                    int pos ;
                    cout<<"donner la position"<<endl ;
                    cin>>pos ;
                     a.supprimer_lc( pos);
                      a.afficher_achat();
                    break ;

                }
            }
       }
       while(n!=0 && n<2 ); */





	system ("PAUSE");

}

