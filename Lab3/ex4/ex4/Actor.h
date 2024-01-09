#pragma once
#include<iostream>
using namespace std;
#ifndef _ACTOR

class Actor
{
private:
	int pret;
public:
	string nume;
	int varsta;
	Actor();
	Actor(string, int, int);
	static int nrInstante;
	//string getNume() const;
};

#endif