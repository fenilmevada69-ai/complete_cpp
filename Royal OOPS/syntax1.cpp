#include<iostream>      //pre processor directives 
#include<string>
using namespace std;

class Teacher {         //Teacher  --->  class / blueprint = group of objects 

private: 
    double salary;

public:           //access modifier / access specifier
    string name;  // attributes / properties / data 
    string subject;
    string dept;    

    // Constructor
    // non parameterized constructor
    Teacher() {                  
        cout<<"Hello i am constructor"<<endl;
        dept = "Medical";    //Initialization
    }


    //method / member function
    void changeDept(string newDept) {
        dept = newDept;
    }

    // setter function
    void setSalary(double s) {
        salary = s;
    }
    
    // getter function
    double getSalary() {
        return salary;
    }
};


int main() {        //main function

    Teacher t1;     //Teacher class ---> object t1  //? Immediately constructor will be called 
    Teacher t2;     //object2 --> t2
    t1.name = "Shradha";
    t1.subject = "C++";
    // t1.dept = "Computer Science";
    // t1.changeDept("Physics");
    // t1.changeDept("Chemistry");
    t1.setSalary(25000);
    cout<<"Name: "<<t1.name<<endl;
    cout<<"Subject: "<<t1.subject<<endl;
    cout<<"Department: "<<t1.dept<<endl;
    cout<<"Salary: "<<t1.getSalary()<<endl;

}