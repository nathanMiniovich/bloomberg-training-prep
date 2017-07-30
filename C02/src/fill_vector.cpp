//: C02:Fillvector.cpp <------- changed to fill_vector.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
// Copy an entire file into a vector of string
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "c02.h"
using namespace std;

void FillVector() {
  vector<string> v;
  ifstream in("src/fill_vector.cpp");
  string line;
  while(getline(in, line))
    v.push_back(line); // Add the line to the end
  // Add line numbers:
  for(int i = 0; i < v.size(); i++)
    cout << v.size()-i-1 << ": " << v[v.size()-i-1] << endl;
} ///:~
