#pragma once
#ifndef _NOD
class LSI;

class Nod
{
public:
	Nod();
	friend class LSI;
private:
	int val;
	Nod* succ;
};
#endif