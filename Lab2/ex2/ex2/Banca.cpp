#include <iostream>
#include "Banca.h"
#include "Clinet.h"
#include <cstdlib>
using namespace std;

Banca::Banca(int nr) {
	codBanca = rand();
	nrClienti = nr;
	vec = new Client*[nr];
}

void Banca::setNumeAdres(string nume, string prenume, string adresa, int i, int numar) {
	vec[i] = new Client(nume, prenume, adresa, numar);
}

void Banca::SetMoneda(string moneda, int i) {
	vec[i]->SetMoneda(moneda, i);
}

void Banca::AdugaCont(unsigned int numar, int i) {
	vec[i]->AdugaCont(numar, i);
}

void Banca::RetragereCont(int suma, int i) {
	vec[i]->RetragereCont(suma, i);
}

void Banca::SetCont(unsigned int suma, int i) {
	vec[i]->SetCont(suma, i);
}