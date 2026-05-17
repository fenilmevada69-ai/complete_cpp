//keyword as delagating constructor which is used to call both constructors at the same time manualy 
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
    
        Teacher() {
            cout << "I am default constructor" << endl;
        }
    
        Teacher(string n, string d, string s, double sal) : Teacher() {  // 👈 Delegating
            cout << "Hello I am parameterized constructor" << endl;
            name = n;
            dept = d;
            subject = s;
            salary = sal;
        }
    
        void getInfo() {
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
            cout << "Subject: " << subject << endl;
            cout << "Department: " << dept << endl;
        }
    };
    
    int main() {
        Teacher t1("Shradha", "Computer Science", "C++", 25000);    //Initialization
        return 0;
    }