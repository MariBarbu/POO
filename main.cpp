
/*Tema 1. Clasa ”Numar_Complex”
	- membrii privati pentru partea reala si partea imaginara (double);
	- constructori pentru initializare si copiere;
	- destructor (în cazul alocarii statice, se seteaza dimensiunea vectorului la zero, 		iar în cazul alocarii dinamice, se dezaloca zona de memorie utilizata);
    	- metode publice pentru setat/furnizat partea reala si partea imaginara;
	- metoda publica de afisare (sub forma "a", "i*a", "-i*a", "a+i*b", "a-i*b");
	- metoda publica pentru determinarea modulului unui numar complex;
	- suma a doua numere complexe, implementata prin supraincarcarea op +;
	- produsul a doua numere complexe, implementat prin supraincarcarea op *;
	- împărțirea a doua numere complexe, implementata prin supraincarcarea op /.
	- metoda publica sqrt pentru furnizarea radicalului de ordinul 2 al unui complex.
Să se realizeze un program de rezolvare a ecuatiei de ordinul doi cu coeficienti complecsi.
*/
#include <iostream>
#include<math.h>
#include "Numar_Complex.h"
using namespace std;
int main()
{
    Numar_Complex a(1,1), b(2,1), c(-1,3), *rez;
    ecuatie(a,b,c,rez);
    cout<<rez[0]<<rez[1]<<rez[2]<<rez[3];

    return 0;
}
