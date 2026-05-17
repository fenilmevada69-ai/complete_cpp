#include<iostream>
using namespace std;

class Person {

private:
    char name[30];
    char address[100];
    float phoneNumber;
    float h,w;

public:
    void scanperdetails(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
    }

}