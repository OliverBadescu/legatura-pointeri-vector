#include "probleme.h"

// todo: Se dă un șir cu n elemente, numere naturale. Determinați diferența în valoare absolută dintre numărul de valori pare din șir și numărul de valori impare din șir.

void sol1() {

	int v[10] = { 15, 245, 28, 33, 11 };
	int dim = 5;

	int valP, valI;
	valImpare(v, dim, valI);
	valPare(v, dim, valP);

	cout << "Diferenta dintre numarul de valori pare din sir si numarul de valori impare din sir este: " << valI - valP << endl;

}


// todo: Se citește un vector cu n elemente, numere naturale. Să se înlocuiască ultimul element prim din vector cu 0, apoi să se afișeze vectorul

void sol2() {

	int v[10] = { 7, 4, 9, 6, 2 };
	int dim = 5;

	int elem;
	ultimulElementPrim(v, dim, elem);
	eliminareUltimElementPrim(v, dim, elem);

	cout << "Vectorul dupa inlocuire este: " << endl;
	afisareVector(v, dim);
	cout << endl;

}


// todo: Se citește un vector cu n elemente, numere naturale. Să se înlocuiască fiecare element prim din vector cu 0, apoi să se afișeze vectorul.

void sol3() {

	int v[10] = { 7, 4, 9, 6, 2 };
	int dim = 5;

	inlocuireElementePrime(v, dim);

	cout << "Vectorul dupa inlocuire este: " << endl;
	afisareVector(v, dim);
	cout << endl;

}


// todo: Se citește un vector cu n elemente, numere naturale. Să se afișeze elementele din vector care sunt multipli ai ultimului element.

void sol4() {

	int v[10] = { 7, 4, 9, 6, 2 };
	int dim = 5;

	cout << "Elementele din vector care sunt multipli ai ultumului element sunt: ";
	multipluUltimElement(v, dim);
	cout << endl;

}


// todo: Se citește un vector cu n elemente, numere naturale. 
// Să se afișeze elementele cu indici pari în ordinea crescătoare a indicilor, iar elementele cu indici impari în ordinea descrescătoare a indicilor.

void sol5() {

	int v[10] = { 7, 9, 2, 6, 8 };
	int dim = 5;

	cout << "Indici pari crescator sunt: ";
	indiciParCresc(v, dim);
	cout << endl;
	cout << "Indici pari descrescator sunt: ";
	indiciParDescresc(v, dim);
	cout << endl;
}


// todo: Se citește un vector cu n elemente, numere naturale. Să se afișeze elementele vectorului în următoarea ordine: primul, ultimul, al doilea, penultimul, etc.


void sol6() {

	int v[10] = { 2, 9, 1, 5, 8 };
	int dim = 5;

	cout << "Elementele sunt: ";
	afisarePrimUltim(v, dim);

}

// todo: Calculaţi valoarea minimă minim și valoarea maximă maxim a valorilor elementelor vectorului.

void sol7() {

	int v[10] = { 2, 9, 1, 5, 8 };
	int dim = 5;
	int min, max;
	valMax(v, dim, max);
	valMin(v, dim, min);

	cout << "Valorea maxima este " << max << " si valorea minima este " << min << endl;

}


// todo: Se citește un vector cu n elemente, numere naturale. 
// Să se determine câte elemente ale vectorului sunt egale cu diferența dintre cea mai mare și cea mai mică valoare din vector.

void sol8() {

	int v[10] = { 7, 7, 9, 2, 4 };
	int dim = 5;
	int dif, ct;
	diferentaMaxMin(v, dim, dif);
	aparentaDiferentaMaxMin(v, dim, ct, dif);

	cout << "Numarul de elemente care apar care sunt egale cu diferenta dintrea cea mai mare si cea mai mica valorea din vector sunt: " << ct;


}




