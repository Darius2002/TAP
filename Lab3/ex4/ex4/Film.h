#pragma once
#include <iostream>
using namespace std;
#ifndef _FILM

class Actor;

class Film
{
public:
	string nume;
	int nrActori;
	Actor* vec;
	Film();
	Film(string, int, int);
	void Afisare();
	void AfisareBuget();
	friend void ActoriComuni(const Film&, const Film&);
private:
	int costTotal;
	friend bool operator>(const Film&, const Film&);
	friend bool comparare(const Film&, const Film&);
	friend void sortare(Film*, string, int);
};

#endif 