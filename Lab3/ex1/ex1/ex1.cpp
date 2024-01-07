#include <iostream>
#include "Punct.h"
using namespace std;

Punct GentruGrutate(Punct vec[], int n);

int main()
{
	Dreapta a(10, 20);

	cout << "Stabiliti drepta formata din 2 puncte: ";
	int x1, x2, y1, y2;

	cin >> x1 >> y1 >> x2 >> y2;

	Punct::CalculDreapta(x1, y1, x2, y2);

	int n;
	cout << "instante a clase Punct: ";
	cin >> n;
	Punct* puncte = new Punct[n];
	int x, y;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		cin >> y;
		puncte[i] = Punct(x, y);
	}
	Punct greu(GentruGrutate(puncte, n));

}
Punct GentruGrutate(Punct* vec, int n) {
	int x = 0, y = 0;
	for (int i = 0; i < n; ++i) {
		x += vec[i].getX();
		y += vec[i].getY();
	}
	return Punct(x, y);
}