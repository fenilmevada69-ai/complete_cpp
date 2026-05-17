#include<iostream>
using namespace std;

class Shape {

private: 
    float l, b, w, h;

public: 
    Shape() {
        l = h = b = w = 0; 
    }

    Shape(float lenght, float breadth,float width, float height) {
        l = lenght;
        b = breadth;
        h = height;
        w = width;
   }

   void display() {
        cout<<"Enter lenght: "<<l<<", Enter Breadth: "<<b<<", Enter width: "<<w<<", Enter height: "<<h<<endl;
   }
};

int main () {
    Shape shape1;
    cout<<"Default";
    return 0;
}