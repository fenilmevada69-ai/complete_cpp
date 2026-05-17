#include<iostream>
#include<string>
using namespace std;
    
class Student {

public:
    string name;
    int rollno;
    float gpa;

    Student() { //default constructor

    }
    Student(string s,int r,float g) { //parametrized constructor
        name = s;
        rollno = r;
        gpa = g;
    }

};

int main() {

    Student s1("Raghav Garg",76,8.2);
    Student s2;
    s2.name = "Himanshu";
    s2.rollno = 77;
    s2.gpa = 8.5;

    cout<<s1.name<<" "<<s1.rollno<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.rollno<<" "<<s2.gpa<<endl;

    return 0;
}