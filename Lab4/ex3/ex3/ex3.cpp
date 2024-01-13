#include <iostream>
#include "Matrice.h"
using namespace std;
int main()
{

    Matrice v(2, 3);

    for (int i = 0; i < v.nrLinii; ++i)
    {
        for (int j = 0; j < v.nrColoane; ++j) {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < v.nrLinii; ++i)
    {
        for (int j = 0; j < v.nrColoane; ++j) {
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
}

