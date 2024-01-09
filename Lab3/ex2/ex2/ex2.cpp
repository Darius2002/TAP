#include <iostream>
#include "LSI.h"

int main() {

	LSI lsi;

	lsi.Adugare(54);
	lsi.Adugare(51);
	lsi.Adugare(5);
	lsi.Parcurgere();


	lsi.Stergere(54);
	lsi.Parcurgere();

	return 0;
}