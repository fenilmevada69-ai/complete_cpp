#include<iostream>
#include<string>
using namespace std;

class Teacher{

private:
    double salary;

public: 
    string name;
    string subject;
    string dept;

    Teacher(string n, string d, string s, double sal) {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    void changeDept(string newDept) {
        dept = newDept;
    }

    void getInfo() {
        cout<<"Name: "<<name<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Salary: "<<salary<<endl;
    }

};

int main() {
    Teacher t1("Shradha", "Computer Science", "C++", 25000);    //Initialization
    t1.getInfo();
    return 0;
}