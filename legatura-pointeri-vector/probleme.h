#include <iostream>
using namespace std;


void afisareVector(int* v, int& dim) {

	for (int i =0; i < dim; i++) {
		cout << *v++ << " ";
	}

}

void valPare(int*v, int& dim, int &valP) {

	valP = 0;

	for (int i = 0; i < dim; i++) {
		if (v[i] % 2 == 0) {
			valP++;
		}
	}

}

void valImpare(int*v, int&dim, int& valI) {

	valI = 0;

	for (int i = 0; i < dim; i++) {
		if (v[i] % 2 == 1) {
			valI++;
		}
	}

}

bool isPrim(int nr) {

	int ct = 0;

	for (int i = 1; i <= nr; i++) {

		if (nr % i == 0) {
			ct++;
		}

	}
	if (ct == 2) {
		return true;
	}
	return false;
}

void ultimulElementPrim(int* v, int &dim, int& elem) {

	for (int i = 0; i < dim; i++) {
		if (isPrim(v[i]) == true) {
			elem = v[i];
		}
	}

}

void eliminareUltimElementPrim(int* v, int &dim, int& elem) {

	for (int i = 0; i < dim; i++) {

		if (v[i] == elem) {
			v[i] = 0;
		}

	}

}

void inlocuireElementePrime(int* v, int& dim) {

	for (int i = 0; i < dim; i++) {

		if (isPrim(*v) == true) {
			*v = 0;
		}
		*v++;
	}

}

void multipluUltimElement(int* v, int& dim) {

	for (int i = 0; i < dim; i++) {

		if (v[i] % v[dim - 1] == 0) {
			cout << v[i] << " ";
		}

	}

}

void indiciParCresc(int* v, int& dim) {

	for (int i = 1; i <= dim; i++) {
		if (i % 2 == 0) {
			cout << *v << " ";
		}
		*v++;
	}

}

void indiciParDescresc(int* v, int& dim) {

	for (int i = dim; i >= 0; i--) {
		if (i % 2 == 0) {
			cout << v[i--] << " ";
		}
		
	}

}

void afisarePrimUltim(int* v, int& dim) {

	int i = 0;
	int j = dim - 1;


	while (i <= j) {
		cout << v[i] << " ";
		if (i != j) {
			cout << v[j] << " ";
		}
		i++;
		j--;
	}
	
}

void valMin(int* v, int& dim, int& min) {

	min = 100;

	for (int i = 0; i < dim; i++) {
		if (v[i] < min) {
			min = v[i];
		}
	}

}

void valMax(int* v, int& dim, int& max) {

	max = -1;

	for (int i = 0; i < dim; i++) {
		if (v[i] > max) {
			max = v[i];
		}
	}

}

void diferentaMaxMin(int* v, int& dim, int& dif) {

	dif = 0;
	int max, min;
	valMax(v, dim, max);
	valMin(v, dim, min);

	dif = max - min;

}

void aparentaDiferentaMaxMin(int* v, int& dim, int& ct, int& dif) {
	ct = 0;

	for (int i = 0; i < dim; i++) {
		if (v[i] == dif) {
			ct++;
		}
	}

}

void intervalMaxMin(int* v, int& dim, int& min, int& max) {

	valMax(v, dim, max);
	valMin(v, dim, min);
	int a = 0, b = 0;

	for (int i = 0; i < dim; i++) {
		if (v[i] == max) {
			a = i;
		}
		if (v[i] == min) {
			b = i;
		}
	}

	if (b > a) {
		int aux = a;
		a = b;
		b = aux;
	}

	for (int i = b; i <= a; i++) {
		cout << v[i] << " ";
	}

}

void primElementPar(int* v, int& dim, int& prim) {

	for (int i = 1; i <= dim; i++) {
		if (v[i] % 2 == 0) {
			prim = i;
			break;
		}
	}

}

void ultimulElementPar(int* v, int& dim, int& ultim) {

	for (int i = 1; i <= dim; i++) {
		if (v[i] % 2 == 0) {
			ultim = i;
		}
	}

}

void sumaIntervalPrimUltimPar(int* v, int& dim, int& s, int& prim, int& ultim) {

	s = 0;
	primElementPar( v ,dim, prim);
	ultimulElementPar(v, dim, ultim);
	
	for (int i = prim; i <= ultim; i++) {

		s = s + v[i];

	}

}

void mediaAritmetica(int* v, int& dim, int& medie) {

	medie = 0;

	for (int i = 0; i < dim; i++) {
		medie = medie + v[i];
	}
	medie = medie / dim;


}

void valMaiMareCaMedieAritmetica(int* v, int& dim, int& medie, int &ct) {

	mediaAritmetica(v, dim, medie);
	ct = 0;
	for (int i = 0; i < dim; i++) {
		if (v[i] > medie) {
			ct++;
		}
	}

}

void sumaVector(int* v, int& dim, int& s) {

	s = 0;
	for (int i = 0; i < dim; i++) {
		s = s + v[i];
	}

}

void construireVector(int* v, int& dim, int* y, int& s) {

	for (int i = 0; i < dim; i++) {
		y[i] = v[i] % s;
	}

}

void construireVector2(int* v, int& dim, int* y, int& s) {


	for (int i = 0; i < dim; i++) {
		y[i] = s - v[i];
	}

}

void bubbleSort(int v[], int dim) {



	bool sortat = false;

	do {

		sortat = true;

		for (int i = 0; i < dim - 1; i++) {

			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;

				sortat = false;
			}

		}

	} while (sortat == false);
}

void construireVectorY(int* v, int& dim, int* y) {


	for (int i = 0; i < dim; i++) {
		if (isPrim(v[i]) == true) {
			y[i] = v[i];
			cout << y[i] << " ";
		}
	}



}

int nrDivizori(int nr) {

	int ct = 0;

	for (int i = 1; i <= nr; i++) {
		if (nr % i == 0) {
			ct++;
		}
	}
	return ct;

}

void contstruireVectorY2(int* v, int& dim, int* y, int& ct) {

	ct = 0;

	for (int i = dim - 1; i >= 0; i--) {
		if (v[i] % 2 == 1) {
			y[i] = v[i];
			ct++;
		}
	}

}

void contorElementePrimeCuUltimul(int* v, int& dim, int& ct) {

	ct = -1;

	for (int i = 0; i < dim; i++) {
		if (nrDivizori(v[i]) == nrDivizori(v[dim - 1])) {
			ct++;
		}
	}

}

int cmmdc(int a, int b) {

	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		if (b > a) {
			b = b - a;
		}
	}
	return a;
}

bool isPrimeIntreEle(int a, int b) {

	return cmmdc(a, b) == 1;

}

void aparitieValMax(int* v, int& dim, int& ct, int& max) {

	ct = 0;

	for (int i = 0; i < dim; i++) {
		if (v[i] == max) {
			ct++;
		}
	}

}

void sumaNTermeni(int* v, int& dim, int& s) {

	cout << s << endl;

	for (int i = dim - 1; i > 0; i--) {
		s = s - v[i];
		cout << s << endl;

	}

}

void pozitiePrimTermenInSirSortat(int* v, int& dim, int& poz) {

	poz = v[0];
	bubbleSort(v, dim);

	for (int i = 0; i < dim; i++) {
		if (poz == v[i]) {
			poz = i;
		}
	}


}

int factorial(int nr) {

	int fact = 1;

	for (int i = 1; i <= nr; i++) {
		fact = fact * i;
	}
	return fact;
}

void divideFact(int* v, int& dim, int& fact) {

	for (int i = 0; i < dim; i++) {
		if (factorial(dim) % v[i] == 0) {
			cout << v[i] << endl;
		}
	}

}

void afaraInterval(int* v, int& dim) {

	int prim = v[0];
	int ultim = v[dim - 1];

	if (prim > ultim) {
		int aux = prim;
		prim = ultim;
		ultim = aux;
	}

	for (int i = 0; i < dim; i++) {
		if (v[i] <= prim && v[i] >= ultim) {
			cout << v[i] << " ";
		}
	}
}

int sumaCif(int nr) {

	int s = 0;
	while (nr != 0) {
		int uc = nr % 10;
		s = s + uc;
		nr = nr / 10;
	}
	return s;
}

void contorElementeCuAceeasiSumaCif(int*v, int dim, int&ct) {

	ct = 0;

	for (int i = 0, j = dim - 1; i < j; i++, j--) {
		if (sumaCif(v[i]) == sumaCif(v[j])) {
			ct++;
		}
	}


}

void contorElementePrime(int*v, int&dim, int&ct) {

	ct = 0;

	for (int i = 0; i < dim; i++) {
		for (int j = i + 1; j < dim; j++) {
			if (nrDivizori(v[i]) == nrDivizori(v[j])) {
				ct++;
			}
		}
	}

}

void elementePrimeEgalDepartate(int*v, int&dim){

	int ct = 0;
	for (int i = 0, j = dim - 1; i < j; i++, j--) {

		if (isPrimeIntreEle(v[i], v[j])) {
			cout << "(" << v[i] << ", " << v[j] << ")" << endl;
		}
	}
	
}