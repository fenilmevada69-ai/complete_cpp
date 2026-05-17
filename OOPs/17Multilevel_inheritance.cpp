#include<iostream>
using namespace std;
    
class Person{

public:
    string name;
    int age;

};

class Student : public Person{ 

public: 
    int roll;

};

class GradStudent : public Student {

public: 
    string researchArea;

};

int main() {
    GradStudent s1;
    s1.name = "Tony Stark";
    s1.age = 30;
    s1.roll = 101;
    s1.researchArea = "quantum number";
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.roll<<endl;
    cout<<s1.researchArea<<endl;
    return 0; 
}