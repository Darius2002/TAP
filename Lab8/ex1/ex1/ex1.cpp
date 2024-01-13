#include <iostream>
#include<fstream>
#include <set>
using namespace std;

int main()
{
	ifstream intrare("intrare.txt");
	string cuvant;
	set<string> vec;

	while (intrare >> cuvant) {
		vec.insert(cuvant);
	}
	intrare.close();

	ofstream iesire("out.txt");

	set<string>::iterator i;

	for (i = vec.begin(); i != vec.end(); ++i) {
		iesire << *i << " ";
	}
	iesire.close();
}
