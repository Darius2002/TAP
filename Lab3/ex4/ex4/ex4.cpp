#include "Film.h"
#include "Actor.h"
#include <iostream>
#include <string>
using namespace std;

int main() {

	int nrFilme, pret, nrActori;
	string nume, tip;
	cout << "Nr filme: ";
	cin >> nrFilme;

	Film* filme = new Film[nrFilme];

	for (int i = 0; i < nrFilme; ++i)
	{
		cin.ignore();
		cout << "Film " << i + 1 << ": " << endl << "Nume: ";
		getline(cin, nume);
		cout << "Pret: ";
		cin >> pret;
		cout << "Nr Actori: ";
		cin >> nrActori;
		filme[i] = Film(nume, nrActori, pret);
	}

	cout << "Nr total de actori: " << Actor::nrInstante << endl;

	cout << "Selectati tiplu de soratare 'buget' sau 'actor'" << endl;
	cin >> tip;

	sortare(filme, tip, nrFilme);

	for (int i = 0; i < nrFilme; ++i)
	{
		filme[i].Afisare();
		filme[i].AfisareBuget();
	}
	cout << endl;

	ActoriComuni(filme[0], filme[1]);

	return 0;
}