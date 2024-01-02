#pragma once
#include<iostream>
#include "ContBancar.h"
using namespace std;

#ifndef CLIENT_

class Client
{
public:
	Client(string, string, string, unsigned int);
	~Client();
	void SetMoneda(string, int);
	void AdugaCont(unsigned int, int);
	void RetragereCont(int, int);
	void SetCont(unsigned int, int);

private:
	string nume, prenume, adresa;
	unsigned int nrConturi;
	ContBancar* conturi;
};
#endif CLIENT_H

