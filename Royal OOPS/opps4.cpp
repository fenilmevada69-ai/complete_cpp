// polymorphism
#include<iostream>
using namespace std;

class Rectangle {

private:
    int lenght;
    int width;
    float lenght1,lenght2;

public:
    void area();
    void area(int l, int w);
    void area(float l, float w);
};
void Rectangle::area(){
    int area, lenght, width;
    cout<<"Enter lenght and width"<<endl;
    cin>>lenght>>endl;
    cin>>width>>endl;
}