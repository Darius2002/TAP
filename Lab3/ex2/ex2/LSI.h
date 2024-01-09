#pragma once
#ifndef _LSI
class Nod;

class LSI
{
private:
	Nod* nod;

public:
	LSI();
	void Adugare(int);
	void Stergere(int);
	void Parcurgere();
};
#endif 
