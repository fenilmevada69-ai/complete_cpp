#include<iostream>
#include<string>
using namespace std;

class Teacher{          //Teacher --> class / blueprint = group of object

public:     //access modifier
    // properties/attributes/data
    string name;
    string dept;
    string subject;
    double salary;  //Salary is private so usually it is written in private access modifier

    // By default all thing is private in c++

    // method/member functions 
    void changeDept(string newDept)
    {
        dept = newDept;
    }

};

int main()
{
    Teacher t1; //Teacher t1 is object 
    Teacher t2; //Teacher t2 is object 
    Teacher t3; //Teacher t3 is object 
    t1.name = "Shradha";            //. operator use to access object and methods
    t1.dept = "Computer Science";
    t1.subject = "C++";
    t1.salary = 25000;

    cout<<t1.name<<endl;
    return 0;
    /*
        if u have to access member functions then u have to use . operator like this >>> //? t1.changeDept("Physics");
    */
}