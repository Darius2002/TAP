#pragma once
#ifndef FRACTIE_H
#define FRACTIE_H
#include <iostream>
using namespace std;

class Fractie {
public:
    Fractie(int a = 0, int b = 1);
    Fractie(const Fractie&);
    ~Fractie();
    Fractie& operator=(const Fractie&);
    Fractie operator+(const Fractie&);
    Fractie operator-(const Fractie&);
    Fractie operator/(const Fractie&);
    Fractie operator*(const Fractie&);
    static int Cmmd(const Fractie&);
    Fractie& Simplifcare();
    Fractie& Reciprocul();
    bool Egal(const Fractie&);
    void Print();
    friend bool operator<(const Fractie&, const Fractie&);
    friend bool operator>(const Fractie&, const Fractie&);
    friend bool operator>=(const Fractie&, const Fractie&);
    friend bool operator<=(const Fractie&, const Fractie&);
    friend bool operator==(const Fractie&, const Fractie&);
    friend bool operator!=(const Fractie&, const Fractie&);
    Fractie& operator+=(const Fractie& other);
    Fractie& operator-=(const Fractie& other);
    Fractie& operator*=(const Fractie& other);
    Fractie& operator/=(const Fractie& other);
    Fractie& operator/=(const Fractie& other);
    Fractie operator++(int);
    Fractie& operator++();
    Fractie operator--(int);
    Fractie& operator--();
    ostream& operator<<(ostream&) const;
    istream& operator>>(istream&);


private:
    bool Prim(int);
    int a, b;
};
#endif