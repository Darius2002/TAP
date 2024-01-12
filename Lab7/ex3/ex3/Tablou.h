#pragma once
#ifndef _TABLOU

#include<iostream>
using namespace std;

template <typename T>
class Tablou
{
private:
	T* vec;
	int dim;
public:
	Tablou(int);
	Tablou(const Tablou&);
	~Tablou();
	Tablou& operator=(const Tablou&);
	//ostream& operator<<(ostream&);
	//istream& operator>>(istream&);
	T& operator[](int);
};
#endif

template <typename T>
Tablou<T>::Tablou(int dim) {
	vec = new T[dim];
}


template <typename T>
Tablou<T>::Tablou(const Tablou& decopiat) {
	this->vec = decopiat.vec;
	this->dim = decopiat.dim;
}

template <typename T>
Tablou<T>::~Tablou() {
	delete this->vec;
	this->dim = 0;
}

template <typename T>
Tablou<T>& Tablou<T>::operator=(const Tablou& decopiat) {
	this->dim = decopiat.dim;
	this->vec = decopiat.vec;
	return *this;
}
/*
template <typename T>
ostream& Tablou<T>::operator<<(ostream& os) {
	os << "Dimensiunea: " << this->dim;
	return os;
}

template <typename T>
istream& Tablou<T>::operator>>(istream& is) {
	is >> this->dim;
}
*/

template <typename T>
T& Tablou<T>::operator[](int i) {
	return vec[i];
}