#include<iostream>
using namespace std;

class Person {
public: 
    string name;
    int age;
};

class Student : public Person {
public: 
    int roll;
};

class Teacher : public Person {
public: 
    double salary;
};
    
int main() {
    Student s1;
    s1.name = "Raghav Garg";
    s1.age = 21;
    s1.roll = 101;
    cout<<s1.name<<" "<<s1.age<<" "<<s1.roll<<endl;
    return 0;
}