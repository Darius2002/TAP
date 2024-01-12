#pragma once
#ifndef _MANAGER
#include "Angajat.h"
#include <iostream>
using namespace std;

class Manager : public Angajat
{
public:
	double getSalar();
	Angajat* curent;
	Manager();
	Manager(int, int);
	~Manager();
	Manager(Manager&);
	Manager& operator=(Manager&);
	ostream& operator<<(ostream&);
	istream& operator>>(istream&);
	double getTarifOrar();
private:
	int nrSubordonati;
};

#endif 