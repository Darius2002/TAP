#include "Angajat.h"
#include "Manager.h"
#include <iostream>
using namespace std;
int main()
{
    
    Angajat marin;

    marin >> cin;

    marin << cout;

    
    cout << endl  << "Salar: " << marin.getSalar() << " Tarif: " << marin.getTarifOrar() << endl;

    Manager claudiu;

    claudiu >> cin;
    claudiu << cout;

    cout << endl << "Salar: " << claudiu.getSalar() << " Tarif: " << claudiu.getTarifOrar() << endl;


    return 0;
}