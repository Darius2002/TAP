#pragma once
#ifndef STIVASTATICA_H
#define STIVASTATICA_H
using namespace std;

class Stiva
{
    public:
        virtual void push(int) = 0;
        virtual int pop() = 0;
        virtual int peek() = 0;
        virtual bool isFull() = 0;
        virtual bool isempty() = 0;
        virtual void print() = 0;
};

class Arrey_Stiva: public Stiva
{
    private:
        int* vec;
        int top, max;
    public:
        Arrey_Stiva(int max=0);
        ~Arrey_Stiva();
        virtual void push(int);
        virtual int pop();
        virtual int peek();
        virtual bool isFull();
        virtual bool isempty();
        virtual void print();
};

#endif 