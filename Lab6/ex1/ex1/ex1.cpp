#include <iostream>
using namespace std;
#include <limits>
#include <typeindex>
template <typename T>

T Maxim(T* vec, int& dim) {

	T max = 0;

	for (int i = 0; i < dim; ++i) {
		if (vec[i] > max) {
			max = vec[i];
		}
	}
	return max;
}

template <typename T>
T Minim(T* vec, int dim) {
	T min = numeric_limits<T>::max();
	for (int i = 0; i < dim; ++i) {
		if (vec[i] < min) {
			min = vec[i];
		}
	}
	return min;
}

template <typename T>
void CautareSecventiala(T* v, int n, T x) {

	int ok = 0; 
	for (int i = 0; i < n; i++)
	{
		if (v[i] == x)
			ok = 1; 
	}
	if (ok == 1)
		cout << "gasit";
	else
		cout << "nu exsita";
	cout << endl;
}

template <typename M>
void CautareBinara(M* a, int n, M x) {

	int st = 1;
	int dr = n;
	int gasit = -1; 
	while (st <= dr) { 
		int mij = (st + dr) / 2;
		if (a[mij] == x) {
			gasit = mij;
			break;
		}
		else if (a[mij] < x) {
			st = mij + 1;
		}
		else {
			dr = mij - 1;
		}
	}

	if (gasit == -1) {
		cout << "Nu am gasit valoarea " << x << " in sir!" << endl;
	}
	else {
		cout << "Valoarea " << x << " se gaseste in sir pe pozitia " << gasit << "!" << endl;
	}
}

template <typename A>
void SortareMetodaBulelor(A* v, int n) {
	if (typeid(A) == typeid(char) || typeid(A) == typeid(string)) {
		bool sortat;
		do
		{
			sortat = true;
			for (int i = 0; i < n - 1; i++)
				if (v[i] < v[i + 1])
				{
					A aux = v[i];
					v[i] = v[i + 1];
					v[i + 1] = aux;
					sortat = false;
				}
		} while (!sortat);
		
	}
	else {
		bool sortat;
		do
		{
			sortat = true;
			for (int i = 0; i < n - 1; i++)
				if (v[i] < v[i + 1])
				{
					A aux = v[i];
					v[i] = v[i + 1];
					v[i + 1] = aux;
					sortat = false;
				}
		} while (!sortat);
	}
}

int main()
{
	int vec[20] = { 1, 10, 2, 3 };
	double vec1[40] = { 2.3, 5.7, 24.5, 3.2 };

	int dim = 4;

	cout << Maxim(vec, dim) << endl;

	cout << Maxim(vec1, dim) << endl;

	cout << Minim(vec1, dim) << endl;

	cout << Minim(vec, dim) << endl;

	CautareSecventiala(vec, dim, 7);
	CautareSecventiala(vec1, dim, 24.5);

	CautareBinara(vec, dim, 7);
	CautareBinara(vec1, dim, 24.5);

	SortareMetodaBulelor(vec, dim);
	SortareMetodaBulelor(vec1, dim);

	int cnt = 1;
	for (int i = 0; i < dim; ++i) {
		
		if (cnt == 1) {
			cout << vec[i] << ' ';
			if (i == 3) {
				i = -1;
				cnt = 0;
				cout << endl;
			}
		}
		else {
			cout << vec1[i] << ' ';
		}
	}

	cout << endl;

	string vec2[10] = { "a", "b", "c", "d"};
	SortareMetodaBulelor(vec2, dim);

	for (int i = 0; i < dim; ++i) {
		cout << vec2[i] << ' ';
	}

	return 0;
}
