#include <iostream>
using namespace std;

class Simple {
    int i;
public:
    Simple(int i); //constructor
    ~Simple(); //destructor
};

Simple::Simple(int i) {
    cout << "Simple constructor called!" << endl;
    this->i = i;
    cout << "Assigned int value is: " << i << endl;
}

Simple::~Simple() {
    cout << "Simple destructor called!" << endl;
    cout << "Simple object with int number " << i << " destroyed." << endl;
}

int main(){
    cout << "Exercises 6.1-6.3 result:" << endl;
    Simple a(33);
    Simple b(2);
}
