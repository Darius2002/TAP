#include "Film.h"
#include "Actor.h"

Film::Film(){}

Film::Film(string nume, int nrActori, int pret): nume(nume), nrActori(nrActori){
	this->costTotal = pret;
	this->vec = new Actor[nrActori];
	string numeA;
	int varstaA, pretA;
	for (int i = 0; i < nrActori; ++i) {
		cout << "Actrourl " << i + 1 << ":" << endl << "Nume: ";
		cin >> numeA;
		cout << "Varsta: ";
		cin >> varstaA;
		cout << "Pret: ";
		cin >> pretA;
		this->costTotal += pretA;
		this->vec[i] = Actor(numeA, pretA, varstaA);
	}
}

bool operator>(const Film& film1, const Film& film2) {

	if (film1.costTotal > film2.costTotal) {
		return true;
	}
	return false;
}

bool comparare(const Film& film1, const Film& film2) {
	if (film1.nrActori > film2.nrActori) {
		return true;
	}
	return false;
}

void sortare(Film* film1, string tip, int nrfilme) {
	if (tip == "buget") {
		for (int i = 0; i < nrfilme - 1; ++i) {
			for (int j = i + 1; j < nrfilme; ++j) {
				if (film1[i] > film1[j]) {
					swap(film1[i], film1[j]);
				}
			}
		}
	}
	else if (tip == "actor") {
		for (int i = 0; i < nrfilme - 1; ++i) {
			for (int j = i + 1; j < nrfilme; ++j) {
				if (comparare(film1[i], film1[j])) {
					swap(film1[i], film1[j]);
				}
			}
		}
	}
}

void Film::Afisare() {
	cout << this->nume << " ";
}

void Film::AfisareBuget() {
	cout << this->costTotal << " ";
}

void ActoriComuni(const Film& film1, const Film& film2) {
	int nrActori1 = film1.nrActori;
	int nrActori2 = film2.nrActori;

	if (nrActori1 != 0 && nrActori2 != 0) {
		int cnt = 0;
		bool verificare = false;
		while (nrActori1 != 0 && nrActori2 != 0) {

			if (film1.vec[cnt].nume == film2.vec[cnt].nume) {
				cout << "Actorul " << film1.vec[cnt].nume << " este comun" << endl;
				verificare = true;
			}
			nrActori1--;
			nrActori2--;
			cnt++;
		}
		if (!verificare) {
			cout << "Nu avem actori comuni" << endl;
		}
	}
	else
	{
		cout << "Nu avem acotri in unul dintre filme" << endl;
	}
}