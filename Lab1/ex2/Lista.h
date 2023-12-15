#pragma once
#ifndef LISTA_H
#define LISTA_H

class Lista{

    public:
        Lista* AdaugareSfarsit(Lista*, int);
        Lista* AdugareInceput(Lista*, int);
        Lista* StergereSfarsit(Lista*);
        Lista* StergereInceput(Lista*);
        void Parcurgere(Lista*);
        bool Cautare(int);
    private:
        int info;
        Lista* succ;
        Lista* CreareSpatiu();
};

#endif