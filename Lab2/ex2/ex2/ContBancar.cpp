#include <iostream>
using namespace std;
#include <cstdlib>
#include "ContBancar.h"

ContBancar::ContBancar(): nrCont(rand()), suma(0), 
moneda(NULL) {}

ContBancar::~ContBancar(){ 
	nrCont = 0;
	suma = 0;
	moneda.clear();
}

bool ContBancar::SetMoneda(const string tip) {
	if (this->suma == 0) {

		if (tip == "RON") {
			this->moneda = "RON";
			return true;
		}
		else if (tip == "EUR") {
			this->moneda = "EUR";
			return true;
		}
		else {
			cout << "Eroare nu avem acesta moneda doar 'RON' si 'EUR'" << endl;
			return false;
		}
	}
	else {
		cout << "Eroare aveti deja setata moneda" << endl;
		return false;
	}
}

bool ContBancar::SetCont(unsigned int suma) {

	if (this->moneda.empty())
	{
		cout << "Mai intai trebuie sa setati moneda!!!" << endl;
	}
	else if (this->suma != 0) {
		cout << "Deja aveti bani in cont puteti sa adugati sau sa scoateti!!!" << endl;
	}
	else
	{
		this->suma = suma;
		return true;
	}
	return false;
}


bool ContBancar::AdugaCont(unsigned int suma) {
	if (this->moneda.empty())
	{
		cout << "Mai intai trebuie sa setati moneda!!!" << endl;
	}
	else {
		this->suma = this->suma + suma;
		return true;
	}
	return false;
		
}

bool ContBancar::RetragereCont(int suma) {
	if (this->moneda.empty())
	{
		cout << "Mai intai trebuie sa setati moneda!!!" << endl;
	}
	else if(this->suma < suma){
		cout << "Nu puterti retrage mai multi bani fata de cat aveti" << endl;
	}
	else {
		this->suma = this->suma - suma;
		return true;
	}
	return false;
}
