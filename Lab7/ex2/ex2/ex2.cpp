#include "LSI.h"
#include <iostream>
using namespace std;

int main()
{
	LSI<int> lista;

	lista.Adugare(10);
	lista.Adugare(100);
	lista.Afisare();
	cout << endl;
	lista.Stergere();
	lista.Afisare();

	cout << endl;

	lista >> cin;

	cout << endl;

	lista << cout;

}
