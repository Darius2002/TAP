#include "Fractie.h"
#include <iostream>
#include <climits>

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

Fractie& Fractie::Reciprocul() {
    int aux = this->a;
    this->a = this->b;
    this->b = aux;
    return *this;
}

Fractie& Fractie::Simplifcare() {

aici:

    for (int i = 2; i < INT_MAX; ++i) {
        if (Prim(i) && this->a % i == 0 && this->b % i == 0) {
            this->a = this->a / i;
            this->b = this->b / i;
            break;
        }
    }

    if (Prim(this->a) == false && Prim(this->b) == false)
    {
        goto aici;
    }
    return *this;
}

bool Fractie::Prim(int nr) {

    if (nr < 2)
        return false;

    for (int i = 2; i <= nr / 2; ++i) {
        if (nr % i == 0) {
            return false;
        }
    }

    return true;
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

bool operator<(const Fractie& unu, const Fractie& doi) {

    double a = unu.a / unu.b;
    double b = doi.a / doi.b;

    if (a < b) {
        return true;
    }

    return false;
}


bool operator>(const Fractie& unu, const Fractie& doi) {

    double a = unu.a / unu.b;
    double b = doi.a / doi.b;

    if (a > b) {
        return true;
    }

    return false;
}


bool operator>=(const Fractie& unu, const Fractie& doi) {

    double a = unu.a / unu.b;
    double b = doi.a / doi.b;

    if (a >= b) {
        return true;
    }

    return false;
}


bool operator<=(const Fractie& unu, const Fractie& doi) {

    double a = unu.a / unu.b;
    double b = doi.a / doi.b;

    if (a <= b) {
        return true;
    }

    return false;
}


bool operator==(const Fractie& unu, const Fractie& doi) {

    double a = unu.a / unu.b;
    double b = doi.a / doi.b;

    if (a == b) {
        return true;
    }

    return false;
}


bool operator!=(const Fractie& unu, const Fractie& doi) {

    double a = unu.a / unu.b;
    double b = doi.a / doi.b;

    if (a == b) {
        return true;
    }

    return false;
}

Fractie& Fractie::operator+=(const Fractie& other) {
    if (this->b != other.b) {
        this->b = this->b * other.b;
        this->a = this->a * other.b + other.a * this->b;
    }
    else {
        this->b = this->b;
        this->a = this->a + other.a;
    }
    return *this;
}


Fractie& Fractie::operator-=(const Fractie& other) {
    if (this->b != other.b) {
        this->b = this->b * other.b;
        this->a = this->a * other.b - other.a * this->b;
    }
    else {
        this->b = this->b;
        this->a = this->a - other.a;
    }
    return *this;
}


Fractie& Fractie::operator*=(const Fractie& other) {
    this->a = this->a * other.a;
    this->b = this->b * other.b;
    return *this;
}


Fractie& Fractie::operator/=(const Fractie& other) {
    this->a = this->a * other.b;
    this->b = this->b * other.a;
    return *this;
}

Fractie Fractie::operator++(int) {
    Fractie vechi = *this;
    vechi.a++;
    vechi.b++;
    return vechi;
}


Fractie& Fractie::operator++() {
    this->a++;
    this->b++;
    return *this;
}


Fractie Fractie::operator--(int) {
    Fractie vechi = *this;
    vechi.a--;
    vechi.b--;
    return vechi;
}


Fractie& Fractie::operator--() {
    this->a--;
    this->b--;
    return *this;
}

ostream& Fractie::operator<<(ostream& os) const {
    os << a << "/" << b;
    return os;
}


istream& Fractie::operator>>(istream& is){
    is >>  a >> b;
    return is;
}