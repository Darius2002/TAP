#include "Actor.h"

int Actor::nrInstante = 0;

Actor::Actor() {

}

Actor::Actor(string nume, int pret, int varsta): nume(nume), 
pret(pret), varsta(varsta)
{
	this->nrInstante++;
}
/*
string Actor::getNume() const {
	return this->nume;
}
*/