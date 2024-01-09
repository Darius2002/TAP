#pragma once
#include <iostream>
using namespace std;
#ifndef _CARTE

class Carte
{
public:
	Carte(string, string, int, int);
	Carte();
	int numar;
	inline void Ad();
	string getTitlu() const;
	string getAutor() const;
	int getID() const;
	int getPret() const;
private:
	string titlu, autor;
	int ID, pret;
};

#endif