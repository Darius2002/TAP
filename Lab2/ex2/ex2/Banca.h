#pragma once
#ifndef BANCA_H
#include "Clinet.h"
#include <iostream>

class Banca
{
public:
	Banca(int nr = 1);
	void setNumeAdres(string, string, string, int, int);
	void SetMoneda(string, int);
	void AdugaCont(unsigned int, int);
	void RetragereCont(int, int);
	void SetCont(unsigned int, int);

private:
	string codBanca;
	int nrClienti;
	Client** vec;
};

#endif BANCA_H

