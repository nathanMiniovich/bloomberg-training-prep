#include <iostream>
#include "c14.h"
using namespace std;

int objectCount;

class Traveler {
    string traveler;
public:
    Traveler(string traveler){
        objectCount++;
        cout << "Traveler string constructor called, obj count is: " << objectCount << endl;
        this->traveler = traveler;
    }
    Traveler(const Traveler& t) : traveler(t.traveler){
        objectCount++;
        cout << "Traveler copy constructor called, obj count is: " << objectCount << endl;
        traveler += " copy";
    }
    ~Traveler(){objectCount--; cout << "Traveler destructor called, obj count is: " << objectCount << endl;}
    Traveler& operator=(const Traveler& t){
        cout << "Traveler operator= called" << endl;
        traveler = t.traveler;
        return *this;
    }
    string getTraveler(){
        return traveler;
    }
};

class Pager {
    string pager;
public:
    Pager(string pager){
        objectCount++;
        cout << "Pager string constructor called, obj count is: " << objectCount << endl;
        this->pager = pager;
    }
    Pager(const Pager& p) : pager(p.pager){
        objectCount++;
        cout << "Pager copy constructor called, obj count is: " << objectCount << endl;
        pager += " copy";
    }
    ~Pager(){objectCount--; cout << "Pager destructor called, obj count is: " << objectCount << endl;}
    Pager& operator=(const Pager& p){
        cout << "Pager operator= called" << endl;
        pager = p.pager;
        return *this;
    }
    void addToPager(string toadd){
        pager += toadd;
    }
    string getPager(){
        return pager;
    }
};

class BusinessTraveler : public Traveler {
    Pager pager;
public:
    BusinessTraveler() : Traveler("default"), pager("default"){
        objectCount++;
        cout << "Business default constructor called, obj count is: " << objectCount << endl;
    }
    BusinessTraveler(string traveler) : Traveler(traveler), pager(traveler){
        objectCount++;
        cout << "Business string constructor called, obj count is: " << objectCount << endl;
    }
    BusinessTraveler(const BusinessTraveler& b) : Traveler(b), pager(b.pager){
        objectCount++;
        cout << "BusinessTraveler copy constructor called, obj count is: " << objectCount << endl;
        pager.addToPager(" copy");
    }
    ~BusinessTraveler(){objectCount--; cout << "BusinessTraveler destructor called, obj count is: " << objectCount << endl;}
    BusinessTraveler& operator=(const BusinessTraveler& b){
        cout << "BusinessTraveler operator= called" << endl;
        pager = b.pager;
        Traveler::operator=(b);
        return *this;
    }
    Pager getBusinessPager(){
        return pager;
    }
};

void TravelerPager(){
    cout << "NOTE: It's interesting to see that printing to cout calls the copy constructor..." << endl;
    objectCount = 0;
    BusinessTraveler a;
    cout << a.getBusinessPager().getPager() << " : " << a.getTraveler() << endl;
    BusinessTraveler b("string");
    cout << b.getBusinessPager().getPager() << " : " << b.getTraveler() << endl;
    a = b;
    cout << a.getBusinessPager().getPager() << " : " << a.getTraveler() << endl;
    BusinessTraveler c = b;
}
