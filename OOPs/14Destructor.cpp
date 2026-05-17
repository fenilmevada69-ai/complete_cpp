#include<iostream>
using namespace std;

class Student {

public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa) {
        this->name = name;
        this->cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    //destructor
    ~Student() {
        cout<<"Hi i delete Everything"<<endl;
        delete cgpaPtr;
    }

    void getInfo() {
        cout<<this->name<<" "<<*this->cgpaPtr<<" "<<endl;
    }

};
    
int main() {
    Student s1("Rahul", 8.7);
    s1.getInfo();
    
    // Student s2 = s1;
    // s2.getInfo();

    return 0;
}