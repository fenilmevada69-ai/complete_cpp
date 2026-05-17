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

    Teacher(string name, string dept, string subject, double salary) {
        //object name = string name
        this->name = name;
        this->dept = dept;          //-> is known as arrow operator 
        this->subject = subject;
        this->salary = salary;
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