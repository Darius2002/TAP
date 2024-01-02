#include <iostream>
#include "ContBancar.h"
#include "Clinet.h";
using namespace std;

Client::Client(string nume, string prenume, string adresa, unsigned int numar) {
	conturi = new ContBancar[numar];
	this->nume = nume;
	this->adresa = adresa;
	this->nrConturi = numar;
}

void Client::SetMoneda(string moneda, int i) {
	bool aux = conturi[i].SetMoneda(moneda);
	if (aux == false) {
		cout << "Eroare la setarea monedei" << endl;
	}
}

void Client::AdugaCont(unsigned int numar, int i) {
	bool aux = conturi[i].AdugaCont(numar);

	if (aux == false) {
		cout << "Eroare la adugagrea in cont" << endl;
	}
}

void Client::RetragereCont(int suma, int i) {
	bool aux = conturi[i].RetragereCont(suma);
	if (aux == false) {
		cout << "Eroare la retragere" << endl;
	}
}

void Client::SetCont(unsigned int suma, int i) {
	bool aux = conturi[i].SetCont(suma);
	if (aux == false) {
		cout << "Eroare la setare cont" << endl;
	}
}

Client::~Client() {
	delete[] this->conturi;
	this->adresa.clear();
	this->nume.clear();
	this->prenume.clear();
	this->nrConturi = 0;
}