// #include<iostream>
// #include<string>
// using namespace std;

// class Teacher {

// private: 
//     double salary;

// public:

//     //non-parameterized constructor
//     Teacher() {
//         cout<<"Hi! i am constructor"<<endl;
//         dept = "Information Technology";
//     }

//     string name;
//     string subject;
//     string dept;

//     void setSalary(double s){ 
//         salary = s;
//     }

//     double getSalary() {
//         return salary;
//     }

//     void changeDept(string newDept) {
//         dept = newDept;
//     }

// };

// int main() {
//     Teacher t1;
//     Teacher t2;
//     t1.name = "Shradhha";
//     t1.subject = "C++";
//     t1.setSalary(30000);

//     cout<<"Name is "<<t1.name<<endl;
//     cout<<"Department is "<<t1.dept<<endl;
//     cout<<"Subject is "<<t1.subject<<endl;
//     cout<<"Salary is "<<t1.getSalary()<<endl;

//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;

class Teacher {

private: 
    double salary;

public:

    //parameterized constructor
    Teacher(string n, string d, string s, double sal) {
        cout<<"Hi! i am constructor"<<endl;
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }//We can call both constructors also para and non para

    

    string name;
    string subject;
    string dept;

    void setSalary(double s){ 
        salary = s;
    }

    double getSalary() {
        return salary;
    }

    void changeDept(string newDept) {
        dept = newDept;
    }

    void getInfo() {
        cout<<"Name is "<<name<<endl;
        cout<<"Department is "<<dept<<endl;
        cout<<"Subject is "<<subject<<endl;
        cout<<"Salary is "<<getSalary()<<endl;
    }

};

int main() {
    Teacher t1("Shradhha", "Computer Science", "C++", 30000);

    t1.getInfo();
    return 0;
}