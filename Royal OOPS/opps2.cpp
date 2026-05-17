#include<iostream>
#include<string>
using namespace std;
class Teacher {

private:
    double salary;

public:
    string name;
    string subject;
    string dept;

    //non parameterized constructor
    Teacher () {
        cout<<"Hello I am constructor"<<endl;
        dept = "Computer Science";
    }
    void changeDept(string newDept) {
        dept = newDept;
    }

    void setSalary(double s) {
        salary = s;
    }

    double getSalary () {
        return salary;
    }

};

int main() {
    Teacher t1;     //Immediately Constructor is called
    Teacher t2;     //Immediately Constructor is called
    t1.name = "Shradha";
    t1.subject = "c++";
    t1.setSalary(25000);
    // cout<<t1.getSalary()<<endl;
    cout<<t1.dept<<endl;
    return 0;
}