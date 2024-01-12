#pragma once
#ifndef _LSI

#include <iostream>
using namespace std;

template <typename T>
class LSI
{
private:
	class Nod {
		public:
			T info;
			Nod* succ;
			Nod(T valoare): succ(nullptr), info(valoare){}
	};
	Nod* inceput;

public:
	LSI();
	LSI(const LSI&);
	~LSI();
	void Adugare(T);
	void Stergere();
	void Afisare();
	LSI& operator=(const LSI&);
	ostream& operator<<(ostream&);
	istream& operator>>(istream&);
};
#endif

template <typename T>
LSI<T>::LSI() {
	inceput = nullptr;
}

template <typename T>
void LSI<T>::Adugare(T deAdaugat) {
	if (this->inceput == nullptr) {
		this->inceput = new Nod(deAdaugat);
	}
	else {
		Nod* nou = inceput;
		while (nou->succ != nullptr)
		{
			nou = nou->succ;
		}
		Nod* aduga = new Nod(deAdaugat);
		nou->succ = aduga;
	}

}

template <typename T>
void LSI<T>::Stergere() {
	if (inceput != nullptr) {

		Nod* nou = inceput;
		while (nou->succ->succ != nullptr)
		{
			nou = nou->succ;
		}
		delete nou->succ;
		nou->succ = nullptr;
	}

}

template <typename T>
void LSI<T>::Afisare() {
	if (inceput != nullptr) {
		Nod* copie = inceput;

		while (copie != nullptr) {
			cout << copie->info << " ";
			copie = copie->succ;
		}
	}
}

template <typename T>
LSI<T>::LSI(const LSI& decopiat) {
	this->inceput = decopiat.inceput;
}

template <typename T>
LSI<T>::~LSI() {
	this->inceput = nullptr;
}

template <typename T>
LSI<T>& LSI<T>::operator=(const LSI& decopiat) {
	this->inceput = decopiat.inceput;
	return *this;
}

template <typename T>
ostream& LSI<T>::operator<<(ostream& os) {
	if (inceput != nullptr) {
		Nod* copie = inceput;

		while (copie != nullptr) {
			os << copie->info << " ";
			copie = copie->succ;
		}
	}
	return os;
}
template<typename T>
istream& LSI<T>::operator>>(istream& is) {
	T info;
	is >> info;
	this->Adugare(info);
	return is;
}