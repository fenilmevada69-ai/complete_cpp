#include<iostream>
using namespace std;

class Student {

public:
    string name;
    int roll;
    double* cgpaPtr;

    Student(string name, int roll, double cgpa) {
        this->name = name;
        this->roll = roll;
        this->cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &orjObj) {
        this->name = orjObj.name;
        this->roll = orjObj.roll;
        this->cgpaPtr = orjObj.cgpaPtr;
    }

    void getInfo() {
        cout<<this->name<<" "<<this->roll<<" "<<*(this->cgpaPtr)<<" "<<endl;
    }

};

int main() {
    Student s1("Raghav", 90, 8.2);

    Student s2(s1);
    s2.getInfo();

    return 0;
}