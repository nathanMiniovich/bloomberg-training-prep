#include <iostream>
#include <fstream>
#include <string>
#include "c02.h"
using namespace std;

void WordCounter(){
	ifstream f("src/word_counter.cpp");
	int wordcount = 0;
	string word;

	while (f >> word){
		++wordcount;
	}

	cout << "There are " << wordcount << " whitespace separated words in word_counter.cpp!" << endl;
}
