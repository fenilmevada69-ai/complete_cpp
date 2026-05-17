#include<iostream>
using namespace std;

class Student {
public: 
    string name;
    int roll;
};

class Teacher {
public:
    string subject;
    double salary;
};  

class TA : public Student, public Teacher {
    
};
    
int main() {
    TA t1;
    t1.name = "tony Stark";
    t1.salary = 50000;
    cout<<t1.name<<" "<<t1.salary<<endl;
    return 0;
}