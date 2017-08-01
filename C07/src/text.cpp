#include <iostream>
#include <string>
#include <fstream>
#include "c07.h"
using namespace std;

class Text {
    string text;
public:
    Text();
    Text(string filename);
    ~Text();
    string contents(){
        return text;
    };
} ;

Text::Text(){

}

Text::Text(string filename){
    ifstream f(filename.c_str());
    for(string line; getline(f,line);){
        text += line + "\n";
    }
}

Text::~Text(){

}

void TextTest(){
    Text text("src/text.cpp");
    cout << text.contents() << endl;
}
