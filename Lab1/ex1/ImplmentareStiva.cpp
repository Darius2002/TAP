#include "StivaStatica.h"
#include <iostream>
using namespace std;

Arrey_Stiva::Arrey_Stiva(int max)
:max(max), top(0), vec(new int[max]){}

Arrey_Stiva::~Arrey_Stiva(){
   delete[] this->vec;
   this->max = 0;
   this->top = 0;
}

bool Arrey_Stiva::isempty(){
   if(vec == NULL)
      return true;
   return false;
}

bool Arrey_Stiva::isFull(){
   if(top == max)
      return true;
   return false;
}

void Arrey_Stiva::push(int a){
   if(isFull())
      return;
   vec[top] = a;
   top++;
}

int Arrey_Stiva::pop(){
   if(isempty())
      return -1;
   top--;
   return vec[top];
}

int Arrey_Stiva::peek(){
   if (isempty())
      return -1;
   return vec[0];
}

void Arrey_Stiva::print(){
   if(isempty())
      return;
   for(int i = 0; i < top; i++)
      cout << vec[i] << " ";
}