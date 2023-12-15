#include <iostream>
#include "StivaStatica.h"

using namespace std;

int main(){
    int c = 0, nr = 0;
    cout << "Nr max de elemente in stiva: ";
    cin >> nr;
   Arrey_Stiva* stiva = new Arrey_Stiva(nr);
    nr = 0;

    while(c != 5)
    {
        cout << "1.Adaugare" << endl;
        cout << "2.Scoatere" << endl;
        cout << "3.Primul element" << endl;
        cout << "4.Afisare" << endl;
        cout << "5.Stop" << endl;
        cin >> c;
        switch (c)
        {
            case 1:
                cout << "nr. adugat: ";
                cin >> nr;
                stiva->push(nr);
                break;
            case 2:
                nr = stiva->pop();
                cout << "Obiectul scos este " << nr << endl;
                break;
            case 3:
                nr = stiva->peek();
                cout << "Primul obiect este " << nr << endl;
                break;
            case 4:
                stiva->print();
                cout << endl;
                break;
        }
    }
    delete stiva;
    return 0;
}