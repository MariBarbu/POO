#include <iostream>
#include "Complex.h"
#include "Vector.h"
#include "Stiva.h"
#include "Coada.h"
#include<vector>
using namespace std;

int main()
{
    //Complex a(1,2);
    //Complex c;
    //c=a;
    //cout<<a.pur_imaginar()<<"\n";
    //Vector b(3, r);
    //Vector d(b);



/*Stiva s(3);
Complex a(0,1), b,c,d;
try{
s.adaugare(a);
s.adaugare(b);
s.adaugare(c);
s.adaugare(d);
}catch (exception& e) {
    cout << e.what() << "\n";
  }
cout<<s;
try{
s.stergere();
s.stergere();

}catch (exception& e) {
    cout << e.what() << "\n";
  }
cout<<s;
s.StivaPurImaginara();
s.tip();
*/
/*Coada C(3);
Complex a(1,2), b(4,5), c(1,5), d;
try{
C.adaugare(a);
C.adaugare(b);
C.adaugare(c);
C.adaugare(d);
}
catch(char const* ex){
cout<<ex<<"\n";}
C.CoadaPurImaginara();
cout<<C;
try{
C.stergere();
cout<<C;
C.stergere();
cout<<C;
C.stergere();
//C.stergere();
}catch(char const* ex){
cout<<ex<<"\n";}
*/
/*Complex a(1,2);
vector<Vector*>vectori;
Coada* c=new Coada(2);
vectori.push_back(c);
Stiva* s=new Stiva(3);
vectori.push_back(s);
for(int i=0;i<vectori.size();++i)
    for(int j=0;j<vectori[i]->getDimMax();++j)
        {vectori[i]->adaugare(a);
        }
*/
return 0;
}
