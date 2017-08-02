#include <iostream>
#include "c07.h"
using namespace std;

class Members {
    int i;
    int j;
    int k;
public:
    Members();
    ~Members();
    int args(){
        return 0;
    };
    int args(int i){
        this->i = i;
        return i;
    };
    int args(int i, int j){
        this->i = i;
        this->j = j;
        return i+j;
    };
    int args(int i, int j, int k){
        this->i = i;
        this->j = j;
        this->k = k;
        return i+j+k;
    };
};

Members::Members(){

}

Members::~Members(){

}

class MembersDefaulted {
    int i;
    int j;
    int k;
public:
    MembersDefaulted();
    ~MembersDefaulted();
    int args(int i = 10, int j = 10, int k = 10){
        this->i = i;
        this->j = j;
        this->k = k;
        return i+j+k;
    };
};

MembersDefaulted::MembersDefaulted(){

}

MembersDefaulted::~MembersDefaulted(){

}

void MembersTest(){
    Members a;
    MembersDefaulted b;

    cout << "retval of no args (no defaults) is: " << a.args() << endl;
    cout << "retval of 1 arg (no defaults) is: " << a.args(1) << endl;
    cout << "retval of 2 args (no degaults) is: " << a.args(1,2) << endl;
    cout << "retval of 3 args (no defaults) is: " << a.args(1,2,3) << endl;
    cout << "============================================" << endl;
    cout << "retval of no args (with defaults) is: " << b.args() << endl;
    cout << "retval of 1 arg (with defaults) is: " << b.args(1) << endl;
    cout << "retval of 2 args (with defaults) is: " << b.args(1,2) << endl;
    cout << "retval of 3 args (with defaults) is: " << b.args(1,2,3) << endl;
    cout << "============================================" << endl;
    cout << "The struture of the function calls between the defaulted and non-defaulted versions do not change!" << endl;
}
