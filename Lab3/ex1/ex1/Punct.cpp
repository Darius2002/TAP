#include "Punct.h"
#include <cmath>

Punct::Punct(int x, int y):x(x), y(y)
{
	CalculPuncte(y, x);
}

Punct::Punct(const Punct& aux) {
	this->x = aux.x;
	this->y = aux.y;
	CalculPuncte(this->x, this->y);
}

Punct::~Punct() {
	this->x = 0;
	this->y = 0;
	CalculMinus(this->x, this->y);
}

double distanta(const Punct& p1, const Punct& p2) {
	return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

void Punct::CalculDreapta(int x1, int y1, int x2, int y2) {
	int m = (y2 - y1) / (x2 - x1);
	int n = y1 - m * x1;

	Dreapta rezultat(m, n);
	dreapta = rezultat;
}

void Punct::CalculPuncte(int x, int y) {
	int calucl1 = dreapta.getM() * x + dreapta.getN();
	int calucl2 = dreapta.getM() * x + dreapta.getN() - y;
	if (calucl1 == y) {
		peDrepta++;
	}
	else if (calucl2 > 0) {
		pozitiv++;
	}
	else
	{
		negativ++;
	}
}

void Punct::CalculMinus(int x, int y) {
	int calucl1 = dreapta.getM() * x + dreapta.getN();
	int calucl2 = dreapta.getM() * x + dreapta.getN() - y;
	if (calucl1 == y) {
		peDrepta--;
	}
	else if (calucl2 > 0) {
		pozitiv--;
	}
	else
	{
		negativ--;
	}
}

int Punct::getX() {
	return this->x;
}


int Punct::getY() {
	return this->y;
}

Dreapta::Dreapta(int m, int n) :m(m), n(n) {}

Dreapta::Dreapta(const Dreapta& aux) {
	this->m = aux.m;
	this->n = aux.n;
}

Dreapta::~Dreapta() {
	this->m = 1;
	this->n = 0;
}

int Dreapta::getM() {
	return this->m;
}

int Dreapta::getN() {
	return this->n;
}