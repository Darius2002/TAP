#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	map<unsigned int, map<string, int>> vec;
	map<unsigned int, map<string, int>>::iterator i;
	map<string, int>::iterator j;
	string linie, cuvant;
	ifstream in("in.txt");
	int nrlinie = 1;

	while (getline(in, linie)) {
		istringstream linieStream(linie);
		while (linieStream >> cuvant)
		{
			if (vec.find(nrlinie) != vec.end()) {
				vec[nrlinie][cuvant]++;
			}
			else {
				vec[nrlinie][cuvant] = 1;
			}
		}
		nrlinie++;
	}
	in.close();

	for (i = vec.begin(); i != vec.end(); ++i) {
		cout << "Nr. linie: " << i->first << endl;
		for (j = i->second.begin(); j != i->second.end(); ++j) {
			cout << "  cuvant: " << j->first << "      apariti: " << j->second << endl;
		}
		cout << endl;
	}
}
