#include <iostream>
#include "c11.h"
using namespace std;

void References(){    
   cout << "You can't make an uninitialized reference, it won't compile." << endl;

   int x = 5;
   int y = 6;

   int& ref = x;
   cout << "Value address refers to: " << ref << ", Address of x: " << &x << ", Address of reference: " << &ref << endl;
   ref = y;
   cout << "Value after change: " << ref << ", Address of reference: " << &ref << endl;
   cout << "The reference wasn't actually reassigned, the value that it points to was just updated!" << endl;

   cout << "You can't have a NULL reference" << endl;
}
