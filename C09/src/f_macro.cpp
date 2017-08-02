#include <iostream>
using namespace std;

//#define BAD_F (x) (x + 1)
#define F(x) (x + 1)

int main(){
    cout << "Exercise 9.1 result: " << endl;
    cout << "Fixed F macro result: " << F (1) << endl;
    cout << "The code for the macro F (x) (x + 1) doesn't even compile because the preprocessor expansion fails" << endl << endl;
}
