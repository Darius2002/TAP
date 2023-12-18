#pragma once
#include <iostream>
using namespace std;
#ifndef CONTBANCAR_H

class ContBancar
{
public:
	ContBancar();
	~ContBancar();
	bool SetMoneda(string);
	bool AdugaCont(unsigned int);
	bool RetragereCont(int);
	bool SetCont(unsigned int);

private:
	unsigned int nrCont;
	float suma;
	string moneda;
};


#endif CONTBANCAR_H
