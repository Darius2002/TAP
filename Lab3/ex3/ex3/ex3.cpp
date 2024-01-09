#include "Carte.h"
#include <iostream>

using namespace std;

int main() {

	Carte* vec = new Carte[23];
	string autor, titlu;
	int ID, pret;


	for (int i = 0; i < 3; ++i) 
	{
		cin >> autor >> titlu >> ID >> pret;
		vec[i] = Carte(autor, titlu, ID, pret);
	}

	string cautare;

	cin >> cautare;

	for (int i = 0; i < 3; ++i) {
		if (vec[i].getAutor() == cautare) {
			cout << "Autor: " << vec[i].getAutor() << " " << "Titlu: " 
			<< vec[i].getTitlu() << " " << " ID: " << vec[i].getID() 
			<< " " << "Pret: " << vec[i].getPret() << endl;
		}
	}


	return 0;
}