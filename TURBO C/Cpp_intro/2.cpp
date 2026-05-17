#include<iostream>
using namespace std;
int main() {
    int a;
    int a2;
    float b;
    char c;
    char d[50];
    long int e;
    double f;

    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter a2 : ";
    cin>>a2;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Enter c : ";
    cin>>c;
    cout<<"Enter d : ";
    cin>>d;
    cout<<"Enter e : ";
    cin>>e;
    cout<<"Enter f : ";
    cin>>f;

    cout<<"Hello World"<<endl;
    cout<<"Value of a is : "<<a<<endl;
    cout<<"Value of b is : "<<b<<endl;
    cout<<"Value of c is : "<<c<<endl;
    cout<<"Value of d is : "<<d<<endl;
    cout<<"Value of e is : "<<e<<endl;
    cout<<"Value of f is : "<<f<<endl;

    if(a>a2) cout<<"a is greater than a2"<<endl;
    else cout<<"a2 is greater than a"<<endl;

    return 0;
}