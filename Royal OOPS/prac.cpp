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

    Teacher () {
        cout<<"I am default constructor";
    }

    // parameterized
    Teacher(string n, string d, string s, double sal) { 
        cout<<"Hello I am constructor"<<endl;
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
        cout<<"Salary: "<<salary<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Department: "<<dept<<endl;
    }

};
   
int main()
{
    Teacher t1("Shradha", "Computer Science", "C++", 2500);
    t1.getInfo();
    return 0;
}