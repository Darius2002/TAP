#include "Complex.h"
#include <cmath>

Complex::Complex(double re, double im) : re(re), im(im) {}

Complex::Complex(const Complex& nr) {
	this->re = nr.re;
	this->im = nr.im;
}

Complex::~Complex() {
	this->re = 0;
	this->im = 1;
}


Complex& Complex::operator=(const Complex& nr) {
	this->re = nr.re;
	this->im = nr.im;
	return *this;

}

Complex Complex::operator+(const Complex& nr) {
	Complex aux;
	aux.re = this->re + nr.re;
	aux.im = this->im + nr.im;
	return aux;
}

Complex Complex::operator-(const Complex& nr) {
	Complex aux;
	aux.re = this->re - nr.re;
	aux.im = this->im - nr.im;
	return aux;
}

Complex Complex::operator/(const Complex& nr) {
	Complex aux;

	aux.re = (this->re * nr.re) / (nr.re * nr.re + nr.re * nr.im + (-1) * nr.im * nr.re + nr.im * nr.im);
	aux.im = (this->re * nr.im + this->im * nr.re + this->im * nr.im) / (nr.re * nr.re + nr.re * nr.im + (-1) * nr.im * nr.re + nr.im * nr.im);
	return aux;
}

Complex Complex::operator*(const Complex& nr) {
	Complex aux;

	aux.re = (this->re * nr.re) - (this->im * nr.im);
	aux.im = (this->re * nr.im) + (this->im * nr.re);
	return aux;
}


double Modul(const Complex& nr) {
	double cal = sqrt(nr.re * nr.re + nr.im * nr.im);
	return cal;
}

Complex Conjugat(const Complex& nr) {
	Complex aux;

	aux.re = nr.re;
	aux.im = nr.im * (-1);
	return aux;
}

bool operator<(const Complex& nr1, const Complex& nr2) {
	if (nr1.im < nr2.im && nr1.re < nr2.re) {
		return true;
	}
	else
	{
		false;
	}
}


bool operator>(const Complex& nr1, const Complex& nr2) {
	if (nr1.im > nr2.im && nr1.re > nr2.re) {
		return true;
	}
	else
	{
		false;
	}
}


bool operator<=(const Complex& nr1, const Complex& nr2) {
	if (nr1.im <= nr2.im && nr1.re <= nr2.re) {
		return true;
	}
	else
	{
		false;
	}
}


bool operator>=(const Complex& nr1, const Complex& nr2) {
	if (nr1.im >= nr2.im && nr1.re >= nr2.re) {
		return true;
	}
	else
	{
		false;
	}
}



bool operator==(const Complex& nr1, const Complex& nr2) {
	if (nr1.im == nr2.im && nr1.re == nr2.re) {
		return true;
	}
	else
	{
		false;
	}
}


bool operator!=(const Complex& nr1, const Complex& nr2) {
	if (nr1.im != nr2.im && nr1.re != nr2.re) {
		return true;
	}
	else
	{
		false;
	}
}



Complex& Complex::operator+=(const Complex& nr) {
	this->re = this->re + nr.re;
	this->im = this->im + nr.im;
	return *this;
}




Complex& Complex::operator-=(const Complex& nr) {
	this->re = this->re - nr.re;
	this->im = this->im - nr.im;
	return *this;
}


Complex& Complex::operator*=(const Complex& nr) {
	this->re = (this->re * nr.re) - (this->im * nr.im);
	this->im = (this->re * nr.im) + (this->im * nr.re);
	return *this;
}


Complex& Complex::operator/=(const Complex& nr) {

	this->re = (this->re * nr.re) / (nr.re * nr.re + nr.re * nr.im + (-1) * nr.im * nr.re + nr.im * nr.im);
	this->im = (this->re * nr.im + this->im * nr.re + this->im * nr.im) / (nr.re * nr.re + nr.re * nr.im + (-1) * nr.im * nr.re + nr.im * nr.im);
	return *this;
}


Complex Complex::operator++(int) {
	Complex vechi = *this;
	vechi.re++;
	vechi.im++;
	return vechi;
}



Complex& Complex::operator++() {
	this->re++;
	this->im++;
	return *this;
}



Complex Complex::operator--(int) {
	Complex vechi = *this;
	vechi.re--;
	vechi.im--;
	return vechi;
}



Complex& Complex::operator--() {
	this->re--;
	this->im--;
	return *this;
}


ostream& Complex::operator<<(ostream& os) const {
	os << re << "+" << im << "i";
	return os;
}


istream& Complex::operator>>(istream& is) {
	is >> re >> im;
	return is;
}