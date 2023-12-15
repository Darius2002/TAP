#pragma once
#ifndef FRACTIE_H
#define FRACTIE_H

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
private:
    bool Prim(int);
    int a, b;
};
#endif