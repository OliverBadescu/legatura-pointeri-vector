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


// 11) todo: Calculaţi valoarea minimă minim și valoarea maximă maxim a valorilor elementelor vectorului.

void sol11() {

	int v[10] = { 2, 9, 1, 5, 8 };
	int dim = 5;
	int min, max;
	valMax(v, dim, max);
	valMin(v, dim, min);

	cout << "Valorea maxima este " << max << " si valorea minima este " << min << endl;

}


// 12) todo: Se citește un vector cu n elemente, numere naturale. 
// Să se determine câte elemente ale vectorului sunt egale cu diferența dintre cea mai mare și cea mai mică valoare din vector.

void sol12() {

	int v[10] = { 7, 7, 9, 2, 4 };
	int dim = 5;
	int dif, ct;
	diferentaMaxMin(v, dim, dif);
	aparentaDiferentaMaxMin(v, dim, ct, dif);

	cout << "Numarul de elemente care apar care sunt egale cu diferenta dintrea cea mai mare si cea mai mica valorea din vector sunt: " << ct;


}


// 13) todo: Se dă un şir cu n numere naturale. Să se afişeze suma primilor n termeni din şir, apoi suma primilor n-1 termeni din şir, şi aşa mai departe.

void sol13() {

	int v[10] = { 1, 7, 3 ,4 };
	int dim = 4;
	int s;
	sumaVector(v, dim, s);

	sumaNTermeni(v, dim, s);

}


// 14) todo: Se dă un şir cu n numere naturale distincte două câte două. Să se determine poziţia pe care s-ar afla primul element al şirului în şirul sortat.

void sol14() {

	int v[10] = { 267, 13, 45, 628, 7 ,79 };
	int dim = 6;
	int poz;
	pozitiePrimTermenInSirSortat(v, dim, poz);

	cout << "Pozitia primului termen in sirul sortat este " << poz << endl;

}


// 15) todo: Se da un vector cu n elemente. Sa se afișeze pe ecran elementele din vector care divid factorialul numărului de elemente n.

void sol15() {

	int v[10] = { 16, 3, 71, 30, 25 };
	int dim = 5;
	int fact;

	divideFact(v, dim, fact);

	
}


// 16) todo: Se citește un vector cu n elemente, numere naturale. Să se afișeze elementele vectorului în următoarea ordine: primul, ultimul, al doilea, penultimul, etc.


void sol16() {

	int v[10] = { 2, 9, 1, 5, 8 };
	int dim = 5;

	cout << "Elementele sunt: ";
	afisarePrimUltim(v, dim);

}


// 17) todo: Se dă un șir cu n elemente, numere reale. Să se determine câte dintre elemente se află în afara intervalului închis determinat de primul și ultimul element.

void sol17() {

	int v[10] = { 2, 0.5, 4, -1, -8, -3 };
	int dim = 6;

	afaraInterval(v, dim);

}


// 18) todo: Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente din vector sunt formate din valori cu aceeași sumă a cifrelor.

void sol18() {

	int v[] = { 51, 842, 15, 28, 77, 132 };
	int dim = 6;
	int ct;
	contorElementeCuAceeasiSumaCif(v, dim, ct);

	cout << "Sunt " << ct << " perechi de numere care au aceeasi suma a cifrelor" << endl;



}


// 19) todo: Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente din vector sunt prime între ele.

void sol19() {

	int v[] = { 51, 18, 15, 28, 77, 121 };
	int dim = 6;

	int ct;
	contorElementePrime(v, dim, ct);

	cout << "Sunt " << ct << " elemente care sunt prime intre ele " << endl;

}


// 20) todo: Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente egal depărtate de capetele vectorului sunt prime între ele.

void sol20() {

	int v[] = { 50, 18, 15, 28, 35, 40 };
	int dim = 6;


	cout << "Elementele care sun egal departe de capetele vectorului si sunt prime intre ele sunt: " << endl;

	elementePrimeEgalDepartate(v, dim);

}