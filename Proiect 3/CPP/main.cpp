#include <iostream>
#include "Film.h"
#include "Personal.h"
#include "Regizor.h"
#include "Actor.h"
#include "Film.h"
#include "FirmaDistributie.h"
#include<vector>
#include<utility>
int Regizor::suma=2000;
int Personal::procent=15;
template<class T>
int FirmaDistributie<T>::numar_pers=0;
template<class T>
int FirmaDistributie<T>::numar_actori=0;
template<class T>
int FirmaDistributie<T>::numar_filme=0;
int FirmaDistributie<Actor>::numar_actori=0;
int FirmaDistributie<Actor>::numar_actoriPrincipali=0;
using namespace std;
int main()
{
/*Personal persoana;
try{
int salariu=persoana.salariu_pers();}
catch (exception& e) {
    cout << e.what() << "\n";
  }
*/
int n;
cin>>n;
vector<pair<Personal, int> > tuplu;
for(int i=0;i<n;i++)
{Personal persoana;
cin>>persoana;
tuplu.push_back(make_pair(persoana, persoana.bonus()));
}
for(int i=0;i<tuplu.size();i++)
{
    cout<<"Persoana  "<<i<<": \n";
    tuplu[0].first.afisare();
    cout<<"Bonus:  "<<tuplu[0].second<<endl;

}




    //p.afisare();
    /*Actor r;
    cin>>r;
    r.afisare();*/
    return 0;
}
