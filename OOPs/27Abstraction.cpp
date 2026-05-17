#include<iostream>
using namespace std;

//class cant be instantiated
class Shape {
public:
    virtual void draw() = 0;    //pure virtual function(blueprint / template)
};

class Circle : public Shape{
public: 
    void draw() override {
        cout<<"Drawing a circle"<<endl;
    }
};

class Sqaure : public Shape{
public: 
    void draw() {
        cout<<"Drawing a sqaure"<<endl;
    }
};

class Rectangle : public Shape{
public: 
    void draw() {
        cout<<"Drawing a rectangle"<<endl;
    }
};
    
int main() {
    Circle c1;
    c1.draw();
    Rectangle r1;
    r1.draw();
    return 0;
}