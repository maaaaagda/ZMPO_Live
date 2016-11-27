#pragma once
#include "iostream"
using namespace std;
class Stos
{
	
	int rozmiar = 0;
	int ile = 0;
	float *tab;
	public:
		Stos(int n) { 
			tab = new float[n];
			rozmiar = n; };
		Stos() {};
		~Stos() { delete tab; };
		Stos(Stos &pcOther);
		bool pop(float k);
		float push();
		bool isEmpty();
		bool isFull();
		float get(int n);
		int getRozmiar();
		void set(int k, float p);
		void operator = (Stos &other);
		bool operator == (Stos &other) ;
		friend ostream& operator<<(ostream& os, const Stos &other);
		
};


