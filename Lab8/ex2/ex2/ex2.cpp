#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main()
{
	string cuvant;
	map<string, unsigned int> vec;
	map<string, unsigned int>::iterator i;
	ifstream intrare("in.txt");

	while (intrare >> cuvant)
	{
		if (vec.find(cuvant) != vec.end()) {
			vec[cuvant]++;
		}
		else

		{
			vec[cuvant] = 1;
		}
	}

	intrare.close();

	ofstream out("out.txt");

	for (i = vec.begin(); i != vec.end(); ++i) {
		out << i->first << ": " << i->second << endl;
	}
	out.close();
}
