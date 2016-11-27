#include "stdafx.h"
#include "Stack.h"
#include "iostream"
#include <string> 
using namespace std;
Stos::Stos(Stos &pcOther)
{

	tab = new float(pcOther.getRozmiar());
	rozmiar = pcOther.getRozmiar();
	ile = pcOther.ile;
	for (int i = 0; i < pcOther.rozmiar; i++)
	{
		set(tab[i], pcOther.get(i));
	}

}
bool Stos::pop(float k)
{
	if (ile < rozmiar)
	{
		
		tab[ile] = k;
		
		ile++;
		cout << "ile  w popie" << ile<<endl;
		return true;
	}
	else cout << "Error. Stack overflow"<<endl;
	return false;
	
}
float Stos::push()
{
	if (ile > 0)
	{
		ile--;
		float temp = tab[ile];
		
		cout << "ile  w pushu " << ile<<endl;
		return temp;
	}
	else cout << "Error";
	return -11111;
	
}
bool Stos::isEmpty()
{
	return rozmiar == 0;
}
bool Stos::isFull()
{
	return ile == rozmiar;
}
float Stos::get(int n)
{
	return tab[n];
}
void Stos::set(int n, float p)
{
	 tab[n] = p;
}
void Stos::operator = (Stos &other)
{
	if (rozmiar != 0) delete[] tab;
	tab = new float(other.getRozmiar());
	ile = other.ile;
	rozmiar = other.ile;
	for (int i = 0; i < other.rozmiar; i++)
	{
		set(tab[i], other.get(i));
	}
}
bool Stos::operator == (Stos &other)
{
	bool rowne = true;
	if (rozmiar != other.rozmiar)
	{
		return false;
	}
	else {
		for (int i = 0; i < other.getRozmiar(); i++)
		{
			if (tab[i] != other.get(i))
				rowne = false;

		}
	}
	return rowne;
}
int Stos::getRozmiar()
{
	return rozmiar;
}
ostream& operator<<(ostream& os, const Stos &other)
{
	string s = "";
	for (int i = 0; i <other.ile; i++)
	{
		s += to_string(other.tab[i]);
		s += " ";
	}
	os << s;
		return os;
}