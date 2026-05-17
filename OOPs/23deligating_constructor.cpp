#include<iostream>
using namespace std;

class Student{ 
public:
    string name;
    int roll;
    float cgpa;

    //deligating constructor
    Student(string name) : Student(name, 103, 9.2) {

    }

    Student(string name, int roll, float cgpa) {
        this->name = name;
        this->roll = roll;
        this->cgpa = cgpa;
    }

    void getInfo() {
        cout<<this->name<<"\t";
        cout<<this->roll<<"\t";
        cout<<this->cgpa<<"\t";
        cout<<endl;
    }
};
    
int main() {
    Student s1("Raghav Garg", 101, 8.2);
    Student s2("Himanshu", 102, 8.8);
    Student s3("Gagan");

    s1.getInfo();
    s2.getInfo();
    s3.getInfo();
    return 0;
}