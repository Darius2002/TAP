#include "Angajat.h"
#include <iostream>

double Angajat::getSalar() {
	return (this->nrOre * this->tarifOrar);
}

double Angajat::getTarifOrar() const {
	return this->tarifOrar;
}

Angajat::Angajat(int nr): nrOre(nr) {}

Angajat::Angajat(const Angajat& decopiat) {
	this->nrOre = decopiat.nrOre;
}

Angajat::~Angajat() {
	this->nrOre = 0;
}

Angajat& Angajat::operator=(const Angajat& decopiat) {
	this->nrOre = decopiat.nrOre;
	return *this;
}

ostream& Angajat::operator<<(ostream& os) {
	os << "nr ore: " << this->nrOre;
	return os;
}

istream& Angajat::operator>>(istream& is) {
	is >> nrOre;
	return is;
}

Angajat::Angajat() {
	this->nrOre = 0;
}

int Angajat::getNrOre() const{
	return this->nrOre;
}