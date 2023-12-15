#include <iostream>
#include "Lista.h"
using namespace std;


int main()
{
    Lista* myList = new Lista();

    myList = myList->AdugareInceput(myList, 11);
    myList = myList->AdugareInceput(myList, 12);
    myList = myList->AdugareInceput(myList, 12);
    myList->Parcurgere(myList);
    cout << endl;
    myList = myList->StergereSfarsit(myList);
    myList->Parcurgere(myList);

    return 0;
}