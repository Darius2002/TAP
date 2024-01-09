#include "Carte.h"

Carte::Carte(string autor, string titlu, int ID, int pret) : autor(autor), titlu(titlu),
ID(ID), pret(pret) {
	Ad();
}
Carte::Carte() {

}

void Carte::Ad() {
	numar++;
}

string Carte::getAutor() const {
	return autor;
}


string Carte::getTitlu() const {
	return titlu;
}


int Carte::getID() const {
	return ID;
}

int Carte::getPret() const {
	return pret;
}