#include "probleme.h"


// 1) todo: Se dă un vector x cu n elemente, numere naturale. 
// Să se construiască un alt vector, y, cu proprietatea că y[i] este egal cu restul împărțirii lui x[i] la suma cifrelor lui x[i].

void sol1() {

	int v[10] = { 50, 1815, 15, 289, 35, 40 };
	int dim = 6;
	int s;
	sumaVector(v, dim, s);
	int y[10];
	construireVector(v, dim, y, s);



	cout << "Vectorul y este: ";
	afisareVector(y, dim);

}


// 2) todo: Se dă un vector x cu n elemente, numere naturale. 
// Să se construiască un alt vector, y, cu n elemente, cu proprietatea că y[i] este egal cu suma elementelor din x, cu excepția lui x[i].

void sol2() {

	int v[10] = { 50, 5, 15, 29, 35, 40 };
	int dim = 6;
	int s, y[10];
	sumaVector(v, dim, s);
	construireVector2(v, dim, y, s);

	cout << "Vectorul este: ";
	afisareVector(y, dim);


}


// 3) todo: Se dă un vector x cu n elemente, numere naturale. Să se construiască un alt vector, y, care să conțină elementele prime din x.

void sol3() {

	int v[10] = { 50, 5, 15, 29, 13, 40 };
	int dim = 6;
	int y[10];

	cout << "Vectorul este:";
	construireVectorY(v, dim, y);
	
	


}


// 4) todo: Se citește un vector cu n elemente, numere naturale distincte. 
// Să se afișeze elementele cuprinse între elementul cu valoarea minimă și cel cu valoare maximă din vector, inclusiv acestea.

void sol4() {

	int v[10] = { 7, 9, 6, 2, 8 };
	int dim = 5;
	int min, max;
	valMax(v, dim, max);
	valMin(v, dim, min);


	cout << "Intervalul este: ";
	intervalMaxMin(v, dim, min, max);

}


// 5) todo: Se citește un vector cu n elemente, numere naturale.
//  Să se determine suma valorilor elementelor cuprinse între primul și ultimul element par al vectorului, inclusiv acestea.

void sol5() {

	int v[10] = { 5, 7, 6, 1, 2, 8 };
	int dim = 5;
	int s, prim, ultim;
	primElementPar(v, dim, prim);
	ultimulElementPar(v, dim, ultim);
	sumaIntervalPrimUltimPar(v, dim, s, prim, ultim);

	cout << "Suma elementelor este: " << s << endl;


}


// 6) todo: Se dă un vector cu n numere naturale. Să se determine câte dintre elemente au valoarea strict mai mare decât media aritmetică a elementelor vectorului.

void sol6() {

	int v[10] = { 5, 0, 2, 1, 4 };
	int dim = 5;
	int medie, ct;
	mediaAritmetica(v, dim, medie);
	valMaiMareCaMedieAritmetica(v, dim, medie, ct);

	cout << "Numarul de elemente care au valorea strict mai mare decat media aritemtica elementelor vectorului este: " << ct;

}


// 7) todo: Se dă un vector x cu n elemente, numere naturale. Să se construiască un alt vector, y, care să conțină elementele impare din x, în ordine inversă.

void sol7() {

	int v[10] = { 50, 5, 15, 29, 13, 40 };
	int dim = 6;
	int y[10], ct;


	contstruireVectorY2(v, dim, y, ct);

	cout << "Vectorul este: ";
	afisareVector(y, ct);

}


// 8) todo: Se dă un vector cu n numere naturale. Să se determine câte dintre elementele vectorului sunt prime cu ultimul element.

void sol8() {

	int v[10] = { 50, 64, 15, 28, 35, 75 };
	int dim = 6;
	int ct;
	contorElementePrimeCuUltimul(v, dim, ct);

	cout << "Sunt " << ct << " elemente prime cu ultimul";

}


// 9) todo: Calculaţi valoarea minima minim si valoarea maxima maxim a celor n numere date.

void sol9() {

	int v[10]={ 412, 22, 12, 1, 999 };
	int dim = 5;
	int min, max;
	valMax(v, dim, max);
	valMin(v, dim, min);

	cout << "Valoarea min este " << min << " valorea max este " << max;

}


// 10) todo: Calculaţi valoarea maxima maxim a celor n numere date şi numărul nrmax de apariţii ale acestei valori în şir.

void sol10() {

	int v[10] = { 1, 52, 52, 52, 41, 21, 51 };
	int dim = 7;
	int max, ct; 
	valMax(v, dim, max);
	aparitieValMax(v, dim, ct, max);

	cout << "Elementul maxim " << max << " apare de " << ct << " ori";


}