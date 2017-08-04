#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw(){
        cout << "Shape::draw() called" << endl;
    };
};

class Circle : public Shape {
public:
    void draw(){
        cout << "Circle::draw() called" << endl;
    };
};

class Square : public Shape {
public:
    virtual void draw(){
        cout << "Square::draw() called" << endl;
    };
};

class Triangle : public Shape {
public:
    virtual void draw(){
        cout << "Triangle::draw() called" << endl;
    };
};

class PureShape {
public:
    PureShape(){
        draw();
    };
    virtual void draw() = 0;
};

void PureShape::draw(){
    cout << "PureShape::draw() called" << endl;
}

class PureCircle : public PureShape {
public:
    void draw(){
        cout << "PureCircle::draw() called" << endl;
    }
};

void ShapePass(PureShape* shape){
   cout << "Function call parameter successfully upcast!" << endl; 
}

int main(){
    cout << "Exercise 15.1 result:" << endl;
    Shape** shapes = new Shape* [4];
    shapes[0] = new Shape();
    shapes[1] = new Circle();
    shapes[2] = new Square();
    shapes[3] = new Triangle();

    shapes[0]->draw();
    shapes[1]->draw();
    shapes[2]->draw();
    shapes[3]->draw();

    cout << endl << "Exercise 15.2 result:" << endl <<
            "You can't make an object of an abstract class" << endl << endl;

    cout << "Exercise 15.3 result:" << endl;
    PureCircle* circle = new PureCircle();
    ShapePass(circle);
}
