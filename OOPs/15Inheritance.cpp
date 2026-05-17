#include<iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person() {
        cout<<"Base/Parent class constructor"<<endl;
    }

    ~Person() {
        cout<<"Base/Parent class destructor"<<endl;
    }
};

class Student : public Person {
    //name, age, roll
    
    public:
    int roll;
    
    Student() {
        cout<<"Child/Derived class constructor"<<endl;
    }

    ~Student() {
        cout<<"Child/Derived class destructor"<<endl;
    }

    void getInfo() {
        cout<<"Name : "<<this->name<<endl; 
        cout<<"Age : "<<this->age<<endl; 
        cout<<"Rollno : "<<this->roll<<endl; 
    }

};

int main() {
    Student s1;
    s1.name = "Rahul";
    s1.age = 21;
    s1.roll = 11;
    s1.getInfo();
    return 0;
}