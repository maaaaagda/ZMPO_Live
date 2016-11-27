// Zmpo_live.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Stack.h"
#include "iostream"

using namespace std;


int main()
{
	Stos s(3);
	s.pop(17);
	s.pop(27);
	s.pop(37);
	cout << s;
	cout << s.push() << endl;
	s.pop(77);
	cout << s;
	s.pop(37);
	cout << s.push() << endl;
	cout << s;
	system("pause");
    return 0;
}

