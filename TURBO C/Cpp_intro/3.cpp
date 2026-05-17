#include<iostream>
#include<string>
using namespace std;
    
int main() {
    int a,b,c;
    int big, small, medium;
    cout<<"Enter a b c "<<endl;
    cin>>a>>b>>c;
    cout<<"a is "<<a<<endl<<"b is "<<b<<endl<<"c is "<<c<<endl;
    if(a>b && a>c) {
        big  = a;
        if(b>c) {
            small = c;
            medium = b;
        }
        else {
            small = b;
            medium = c;
        }
    }
    else if(b>a && b>c) {
        big = b;
        if(a>c) {
            medium = a;
            small = c;
        }
        else {
            medium = c;
            small = a;
        }
    }
    else if(c>a && c>b) {
        big = c;
        if(b>a) {
            medium = b;
            small = a;
        }
        else {
            medium = a;
            small = b;
        }
    }
    cout<<"Big is "<<big<<endl<<"Medium is "<<medium<<endl<<"Small is "<<small<<endl;
    return 0;
}