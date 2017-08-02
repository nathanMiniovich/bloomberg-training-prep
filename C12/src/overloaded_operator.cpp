#include <iostream>
using namespace std;

class Integer {
    int i;
public:
    Integer();
    Integer(int i);
    ~Integer();
    const Integer& operator++(){ //prefix 
        i++;
        cout << "Prefix incremented" << endl;
        return *this;
    };
    const Integer operator++(int){ //postfix
        Integer before(i);
        i++;
        cout << "Postfix incremented" << endl;
        return before;
    };
    int GetIntVal(){
        return i;
    };
};

Integer::Integer(){

}

Integer::Integer(int i){
    this->i = i;
}

Integer::~Integer(){

}

int main(){
    cout << "Exercise 12.1 result:" << endl;
    Integer i(0);
    cout << i.GetIntVal() << endl;
    i++;
    cout << i.GetIntVal() << endl;
    ++i;
    cout << i.GetIntVal() << endl;
    cout << "No compiler warnings." << endl << endl;
}
