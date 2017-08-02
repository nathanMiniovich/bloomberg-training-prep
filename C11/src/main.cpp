#include <iostream>
#include "c11.h"
using namespace std;

int pitbull = 1;

int main(){
    cout << "Exercise 11.3 result: " << endl;
    References();
    cout << endl << "Exercise 11.4 result: " << endl;
    cout << "Address of reference on return: " << &(Pointers(&pitbull)) << endl;
    cout << endl << "Exercise 11.8 result: " << endl;
    char c = 'a';
    cout << "Char before modification: " << c << endl;
    SetChar(c);
    cout << "Char after modification: " << c << endl;
    cout << "This makes the program more readable by being able to set a value without an explicity stated copying or reassignment" << endl << endl;
}
