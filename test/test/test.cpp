#include <iostream>
#include "Fractie.h"

using namespace std;

int main() {
    Fractie nr(5, 2);
    Fractie nr2(5, 3);

    nr2 = nr2 + nr;
    nr2.Print();

    cout << "Haide geo" << endl;

    return 0;
}