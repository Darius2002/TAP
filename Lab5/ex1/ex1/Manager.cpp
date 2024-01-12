#include "Manager.h"
#include "Angajat.h"
#include <iostream>
using namespace std;

double Manager::getSalar() {
	double salar = (curent->getTarifOrar() * 50 / 100 + curent->getTarifOrar()) * curent->getNrOre();
	return salar;
}

Manager::Manager() {
	this->curent = new Angajat();
}

Manager::Manager(int nrore, int nrang) {
	curent = new Angajat(nrore);
	this->nrSubordonati = nrang;
}

Manager::~Manager() {
	curent->~Angajat();
	this->nrSubordonati = 0;
}

Manager::Manager(Manager& copie) {
	this->curent = copie.curent;
	this->nrSubordonati = copie.nrSubordonati;
}

Manager& Manager::operator=(Manager& copiat) {
	this->curent = copiat.curent;
	this->nrSubordonati = 0;
	return *this;
}

ostream& Manager::operator<<(ostream& os) {
	this->curent->operator<<(os);
	os << " nr. Subordonati: " << this->nrSubordonati;
	return os;
}

istream& Manager::operator>>(istream& is) {
	this->curent->operator>>(is);
	is >> this->nrSubordonati;
	return is;
}

double Manager::getTarifOrar() {
	return (curent->getTarifOrar() * 50 / 100 + curent->getTarifOrar());
}