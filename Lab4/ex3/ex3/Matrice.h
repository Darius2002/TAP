#ifndef MATRICE_H

#include <iostream>
using namespace std;

class Matrice {
public:
    int nrLinii, nrColoane;
    int** elemente;
    Matrice(int nrLinii, int nrColoane);
    ~Matrice();
    Matrice& operator=(const Matrice& other);
    int* operator[](int index) const;
    bool operator==(const Matrice& other);
    bool operator!=(const Matrice& other);
    Matrice operator+(const Matrice& other);
    Matrice operator-(const Matrice& other);
    bool operator>(const Matrice& other);
    bool operator<(const Matrice& other);
    bool operator<=(const Matrice& other);
    bool operator>=(const Matrice& other);

    friend ostream& operator<<(ostream& os, Matrice& matrice);
    friend istream& operator>>(istream& is, Matrice& matrice);

};
#endif



