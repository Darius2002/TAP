#pragma once
#ifndef _Punct

class Dreapta;

class Punct
{
	private:
		int x, y;
		static Dreapta dreapta;
		static int pozitiv, negativ, peDrepta;
		void CalculPuncte(int, int);
		void CalculMinus(int, int);

	public:
		Punct(int x = 0, int y = 0);
		Punct(const Punct&);
		~Punct();
		friend double distanta(const Punct&, const Punct&);
		static void CalculDreapta(int, int, int, int);
		int getX();
		int getY();
};

class Dreapta
{
private:
	int m, n;
public:
	Dreapta(int m = 1, int n = 0);
	Dreapta(const Dreapta&);
	~Dreapta();
	int getM();
	int getN();
};
#endif
