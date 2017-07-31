#include <iostream>
#include "c04.h"
using namespace std;

void DynamicStorage(){
	int* a = new int;
	long* b = new long;
	char* carr = new char[100];
	long* larr = new long[100];

	cout << "Address of int: " << &a << endl;
	cout << "Address of long: " << &b << endl;
	cout << "Address of char array " << static_cast<void*>(&carr) << endl;
	cout << "Address of long array " << &larr << endl;

	delete []a;
	delete []b;
	delete []carr;
	delete []larr;
}
