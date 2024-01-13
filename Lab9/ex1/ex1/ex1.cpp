#include <iostream>
#include <list>
#include <string>
#include <fstream>
using namespace std;



int main()
{
	ifstream in("in.txt");


    string linie;
    list<string> pro;
    list<string>::iterator i;

    while (getline(in, linie))
    {
        pro.push_back(linie);
    }
    in.close();

    int dimMax = 0;

    for (string linie : pro)
    {
        int dim = linie.length();
        if (dim > dimMax)
        {
            dimMax = dim;
        }
    }

    string sir(dimMax, '_');

    pro.push_front(sir);
    pro.push_back(sir);

    cout << endl;

    for (i = pro.begin(); i != pro.end(); ++i) {
        linie = *i;
        int dim2 = linie.length();
        cout << "|" << string((dimMax - dim2) / 2, ' ') << linie << string((dimMax - dim2 + 1) / 2, ' ') << "|" << endl;
    }


	return 0;
}