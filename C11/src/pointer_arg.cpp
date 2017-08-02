#include <iostream>
#include "c11.h"
using namespace std;

int mrworldwide = 2;

int& Pointers(int* pointer){
    cout << "Initial value pointed to is: " << *pointer << endl;
    cout << "Address of initial value: " << pointer << endl;
    pointer = &mrworldwide;
    cout << "Value after pointer is reassigned: " << *pointer << endl;
    cout << "Address of value changed to: " << &mrworldwide << endl;
    return *pointer;
}
