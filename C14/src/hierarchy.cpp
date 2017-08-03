#include <iostream>
#include "c14.h"
using namespace std;

class Top {
public:
    Top();
    ~Top();
};

Top::Top(){
    cout << "Top constructor called" << endl;
}

Top::~Top(){
    cout << "Top destructor called" << endl;
}

class Mid : public Top {
public:
    Mid();
    ~Mid();
};

Mid::Mid(){
    cout << "Mid constructor called" << endl;
}

Mid::~Mid(){
    cout << "Mid destructor called" << endl;
}

class Bot : public Mid {
public:
    Bot();
    ~Bot();
};

Bot::Bot(){
    cout << "Bot constructor called" << endl;
}

Bot::~Bot(){
    cout << "Bot destructor called" << endl;
}

void Hierarchy(){
    Bot b;
    cout << "Base classes essentially become members of their derived classes,\n"
            "so the higher level class is always constructed before derived one. For this reason\n"
            "the Top constructor is called first followed by Mid and Bot. On\n"
            "destruction the call to destroy bot will be make first, and will chain down\n"
            "to Mid and then Top" << endl;
}
