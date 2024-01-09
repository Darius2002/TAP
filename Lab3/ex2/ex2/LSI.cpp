#include "LSI.h"
#include "Nod.h"
#include <iostream>
using namespace std;

LSI::LSI() {
    this->nod = NULL;
}

 void LSI::Adugare(int info) {
    if (this->nod == NULL)
    {
        nod = new Nod();
        nod->val = info;
        nod->succ = NULL;
    }
    else 
    {
        Nod* nou = new Nod();
        nou->val = info;
        nou->succ = this->nod;
        this->nod = nou;
    }
}


 void LSI::Stergere(int info) {
     if (this->nod != NULL && this->nod->val == info) {
         nod = nod->succ;
         
      
     }
     else if (this->nod != NULL) {
         Nod* aux = this->nod;
         Nod* pre = aux;
         while (aux != NULL) {
             
             if (aux->val == info) {
                 pre->succ = aux->succ;
                 delete aux;
                 break;
             }
             pre = aux;
             aux = aux->succ;
         }

     }
 }

 void LSI::Parcurgere() {
     Nod* aux = this->nod;
     while (aux != NULL) {
         cout << aux->val << " ";
         aux = aux->succ;
     }
 }