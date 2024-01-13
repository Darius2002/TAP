#include "Matrice.h"

Matrice::Matrice(int nrLinii, int nrColoane) : nrLinii(nrLinii), nrColoane(nrColoane)
{
    this->elemente = new int* [nrLinii];
    for (int i = 0; i < nrLinii; ++i)
    {
        this->elemente[i] = new int[nrColoane];
    }
}

//Matrice::Matrice(const Matrice& other){}
Matrice::~Matrice()
{
    for (int i = 0; i < this->nrLinii; ++i)
        delete[] this->elemente[i];
    delete[] elemente;
}

int* Matrice::operator[](int index) const
{
    return elemente[index];
}

Matrice& Matrice::operator=(const Matrice& other)
{

    if (this != &other) {

        for (int i = 0; i < nrLinii; ++i) {
            delete[] elemente[i];
        }
        delete[] elemente;

        nrLinii = other.nrLinii;
        nrColoane = other.nrColoane;

        elemente = new int* [nrLinii];
        for (int i = 0; i < nrLinii; ++i) {
            elemente[i] = new int[nrColoane];
        }

        for (int i = 0; i < nrLinii; ++i) {
            for (int j = 0; j < nrColoane; ++j) {
                elemente[i][j] = other.elemente[i][j];
            }
        }
    }
    return *this;

}

bool Matrice::operator==(const Matrice& other)
{

    if (nrLinii != other.nrLinii || nrColoane != other.nrColoane)
        return false;

    for (int i = 0; i < nrLinii; ++i)
        for (int j = 0; j < nrColoane; ++j)
            if (elemente[i][j] != other.elemente[i][j])
                return false;

    return true;
}

bool Matrice::operator!=(const Matrice& other)
{
    if (nrLinii != other.nrLinii || nrColoane != other.nrColoane) {
        return false;
    }

    for (int i = 0; i < nrLinii; ++i) {
        for (int j = 0; j < nrColoane; ++j)
        {
            if (elemente[i][j] != other.elemente[i][j]) {
                return false;
            }
        }
    }
    return true;
}

bool Matrice::operator>(const Matrice& other)
{
    if ((this->nrLinii < other.nrLinii) || (this->nrColoane < other.nrColoane))
        return false;

    return true;
}

bool Matrice::operator<(const Matrice& other)
{
    if ((this->nrLinii > other.nrLinii) || (this->nrColoane > other.nrColoane))
        return false;
    return true;
}

bool Matrice::operator<=(const Matrice& other)
{
    if ((this->nrLinii >= other.nrLinii) || (this->nrColoane >= other.nrColoane))
        return false;
    return true;
}

bool Matrice::operator>=(const Matrice& other)
{
    if ((this->nrLinii <= other.nrLinii) || (this->nrColoane <= other.nrColoane))
        return false;
    return true;
}

Matrice Matrice::operator+(const Matrice& other)
{
    Matrice adunare(nrLinii, nrColoane);

    for (int i = 0; i < nrLinii; ++i)
        for (int j = 0; j < nrColoane; ++j)
            adunare.elemente[i][j] = elemente[i][j] + other.elemente[i][j];

    return adunare;
}


Matrice Matrice::operator-(const Matrice& other)
{
    Matrice scadere(nrLinii, nrColoane);

    for (int i = 0; i < nrLinii; ++i) {
        for (int j = 0; j < nrColoane; ++j)
            scadere.elemente[i][j] = elemente[i][j] - other.elemente[i][j];
    }

    return scadere;
}


ostream& operator<<(ostream& os, Matrice& matrice)
{
    for (int i = 0; i < matrice.nrLinii; ++i) {
        for (int j = 0; j < matrice.nrColoane; ++j)
        {
            os << matrice.elemente[i][j] << ' ';
        }
    }

    return os;
}


istream& operator>>(istream& is, Matrice& matrice)
{

    for (int i = 0; i < matrice.nrLinii; ++i) {
        for (int j = 0; j < matrice.nrColoane; ++j)
            is >> matrice.elemente[i][j];
    }
    return is;
}



