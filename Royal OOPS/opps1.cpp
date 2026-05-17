#include<iostream>
#include<string>
using namespace std;

class Teacher{

private:
    double salary;

public :
    string name;
    string subject;
    string dept;

    void changeDept(string newDept) {
        dept = newDept;
    }

    // setter functoin(Used to set private values using this public functions)
    void setSalary(double s) {
        salary = s;
    }

    // getter function(Used to get private values using this public functions)
    double getSalary() {
        return salary;
    }

};

int main()
{
    Teacher t1;
    t1.name = "shradha";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.setSalary(25000);
    cout<<"Name: "<<t1.name<<endl;
    cout<<"Salary: "<<t1.getSalary()<<endl;
    cout<<"Subject: "<<t1.subject<<endl;
    cout<<"Department: "<<t1.dept<<endl;
}