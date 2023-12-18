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

private:
	string numa, prenume, adresa;
	unsigned int nrConturi;
	ContBancar* conturi;
};


#endif CLIENT_H

