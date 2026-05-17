//Structur limitations ---> 1. No methods
//                          2. members are public

#include<iostream>
using namespace std;

//class / blueprint 
class Teacher {

private:    //access modifier / access specifier
    double salary;

public:
    //member / data / attributes / properties / values
    string name;
    string dept;
    string subject;

    //member function / methods
    void changeDept(string newDept) {
        dept = newDept;
    }
    
    //setter
    void setSalary(double s) {
        salary = s;
    }
    //getter
    double getSalary() {
        return salary;
    }

};

int main() {
    //objects / instance / entities
    Teacher t1;

    t1.name = "Shradhha";
    t1.dept = "Computer Science";
    t1.subject = "C++";
    t1.setSalary(25000);

    cout<<"Name is "<<t1.name<<endl;
    cout<<"Subject is "<<t1.subject<<endl;
    cout<<"Department is "<<t1.dept<<endl;
    cout<<"Salary is "<<t1.getSalary()<<endl;

    return 0;
}