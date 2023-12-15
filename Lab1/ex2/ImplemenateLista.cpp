#include "Lista.h"
#include <iostream>
using namespace std;

Lista* Lista:: CreareSpatiu(){
    Lista* aux = new Lista();
    return aux;
}

Lista* Lista:: AdugareInceput(Lista* inceput, int info){
    if (inceput == NULL)
    {
        inceput = inceput->CreareSpatiu();
        inceput->info = info;
        inceput->succ = NULL;
    }
    else{
        Lista* nou = nou->CreareSpatiu();
        nou->info = info;
        nou->succ = inceput;
        inceput = nou;
    }
    return inceput;
}

Lista* Lista:: AdaugareSfarsit(Lista* inceput, int info){
    if(inceput == NULL)
    {
        inceput = inceput->CreareSpatiu();
        inceput->info = info;
        inceput->succ = NULL;
    }
    else{
        Lista* aux = inceput;
        while (aux->succ != NULL)
        {
            aux = aux->succ;
        }

        Lista* copil = copil->CreareSpatiu();
        aux->succ = copil;
        copil->info = info;
    }
    return inceput;
}

Lista* Lista::StergereSfarsit(Lista* inceput){
    if(inceput != NULL)
    {
        Lista* aux = inceput;
        while (aux->succ->succ != NULL)
        {
            aux = aux->succ;
        }
        delete aux->succ;
        aux->succ = NULL;
    }
    return inceput;
}

Lista* Lista::StergereInceput(Lista* inceput){
    if (inceput != NULL)
    {
        delete inceput;
        inceput = inceput->succ;
    }
    return inceput;
}

void Lista::Parcurgere(Lista* inceput){
    Lista* aux = inceput;
    while(aux->succ != NULL){
        cout << aux->info << " ";
         aux = aux->succ;
    }

}