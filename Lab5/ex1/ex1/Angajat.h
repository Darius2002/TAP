#pragma once
#ifndef _ANGAJAT
#include <iostream>
using namespace std;
class Angajat
{
private:
	double tarifOrar = 5.5;
	int nrOre;
public:
	double getSalar();
	double getTarifOrar() const;
	Angajat();
	Angajat(int);
	Angajat(const Angajat&);
	~Angajat();
	Angajat& operator=(const Angajat&);
	ostream& operator<<(ostream&);
	istream& operator>>(istream&);
	int getNrOre() const;
};
#endif 