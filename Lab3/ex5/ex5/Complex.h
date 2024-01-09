#pragma once
#ifndef _Complex

class Complex
{
private:
	double re, im;
public:
	Complex(double re = 0, double im = 0);
	Complex(const Complex&);
	~Complex();
	Complex& operator=(const Complex&);
	Complex operator+(const Complex&);
	Complex operator-(const Complex&);
	Complex operator/(const Complex&);
	Complex operator*(const Complex&);
	friend double Modul(const Complex&);
	friend Complex Conjugat(const Complex&);

};

#endif