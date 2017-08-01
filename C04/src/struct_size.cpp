#include <iostream>
#include "c04.h"
using namespace std;

struct data_mems_only {
    int a;
    long b;
};

struct data_and_func {
    int a;
    long b;
    int func(){
        return 1;
    }
};

struct no_mems {

};

void StructSize(){
    cout << "Size of struct with only data members: " << sizeof(data_mems_only) << endl;
    cout << "Size of struct with data and function members: " << sizeof(data_and_func) << endl;
    cout << "Size of struct with no members: " << sizeof(no_mems) << endl;
    cout << "sizeof() for the struct with no members returned a non-zero value. The reason for this is" << endl;
    cout << "explained by the book: \"In early versions of the language, the size was zero, but" << endl;
    cout << "an awkward situation arises when you create such objects: They have the same address" << endl;
    cout << "as the object created directly after them, and so are not distinct. One of the fundamental" << endl;
    cout << "rules of objects is that each object must have a unique address, so structures with no data" << endl;
    cout << "members will always have some minimum nonzero size.\"" << endl;
}
