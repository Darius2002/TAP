#include <iostream>
#include "Tablou.h";
using namespace std;

int main()
{
	Tablou<int> vec(10);
	
	for (int i = 0; i < 10; ++i) {
		cin >> vec[i];
		
		cout << vec[i];
	}
}
