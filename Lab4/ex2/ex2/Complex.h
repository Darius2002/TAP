#pragma once
#ifndef _Complex

#include<iostream>
using namespace std;

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

    friend bool operator<(const Complex&, const Complex&);
    friend bool operator>(const Complex&, const Complex&);
    friend bool operator>=(const Complex&, const Complex&);
    friend bool operator<=(const Complex&, const Complex&);
    friend bool operator==(const Complex&, const Complex&);
    friend bool operator!=(const Complex&, const Complex&);
    Complex& operator+=(const Complex& other);
    Complex& operator-=(const Complex& other);
    Complex& operator*=(const Complex& other);
    Complex& operator/=(const Complex& other);
    Complex& operator/=(const Complex& other);
    Complex operator++(int);
    Complex& operator++();
    Complex operator--(int);
    Complex& operator--();
    ostream& operator<<(ostream&) const;
    istream& operator>>(istream&);

};

#endif