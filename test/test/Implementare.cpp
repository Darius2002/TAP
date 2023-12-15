#include <iostream>
#include "Fractie.h"
using namespace std;

Fractie::Fractie(int a, int b) :
    a(a), b(b) {}

Fractie::Fractie(const Fractie& deCopiat) {
    this->a = deCopiat.a;
    this->b = deCopiat.b;
}

Fractie::~Fractie() {
    this->a = 0;
    this->b = 1;
}

Fractie& Fractie::operator=(const Fractie& preluat) {
    this->a = preluat.a;
    this->b = preluat.b;
    return *this;
}


Fractie Fractie::operator+(const Fractie& other) {
    Fractie rezultat;
    if (this->b != other.b) {
        rezultat.b = this->b * other.b;
        rezultat.a = this->a * other.b + other.a * this->b;
    }
    else {
        rezultat.b = this->b;
        rezultat.a = this->a + other.a;
    }
    return rezultat;
}

Fractie Fractie::operator-(const Fractie& other) {
    Fractie rezultat;
    if (this->b != other.b) {
        rezultat.b = this->b * other.b;
        rezultat.a = this->a * other.b - other.a * this->b;
    }
    else {
        rezultat.b = this->b;
        rezultat.a = this->a - other.a;
    }
    return rezultat;
}

Fractie Fractie::operator/(const Fractie& other) {
    Fractie rezultat;
    rezultat.a = this->a * other.b;
    rezultat.b = this->b * other.a;
    return rezultat;
}

Fractie Fractie::operator*(const Fractie& other) {
    Fractie rezultat;
    rezultat.a = this->a * other.a;
    rezultat.b = this->b * other.b;
    return rezultat;
}

bool Fractie::Egal(const Fractie& other) {
    double a = 0, b = 0;

    a = this->a / this->b;
    b = other.a / other.b;

    if (a == b)
        return true;
    else
        return false;
}

void Fractie::Print() {
    cout << this->a << "/" << this->b << endl;
}