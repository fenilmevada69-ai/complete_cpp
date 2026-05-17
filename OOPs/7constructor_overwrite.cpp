//Multiple constructors
#include<iostream>
#include<string>
using namespace std;
    
class Student {

public:
    string name;
    int rollno;
    float gpa;

    Student() { //default constructor(it will be removed automatically when we use parametrized constructor,so we have to add explicitly if we need)

    }

    Student(int r) {
        rollno = r;
    }

    Student(string s, int r) {
        name = s;
        rollno = r;
    }

    Student(string s,int r,float g) { //parametrized constructor
        name = s;
        rollno = r;
        gpa = g;
    }

    Student(int r,string s,float g) { //parametrized constructor
        name = s;
        rollno = r;
        gpa = g;
    }

};

int main() {

    Student s1("Raghav", 90);   //using parametrized constructor
    s1.rollno = 94;
    s1.gpa = 8.2;

    Student s2; //using default constructor
    s2.name = "Himanshu";
    s2.rollno = 77;
    s2.gpa = 8.5;

    Student s3("Gagan", 14, 9.2); //using parametrized constructor

    Student s4(16); //using parametrized constructor

    Student s5(16,"Gagan",9.2);

    //method 1(method 1 to create deep copy in c++)
    Student s6 = s1;    //Deep copy
    s6.name = "Manish";  
    // OR  s1.name = "Manish";
    
    //method 2(method 2 to create deep copy in c++)
    Student s7(s1);     //Copy Constructor --> Deep Copy
    s7.name = "Vijay";

    cout<<s1.name<<" "<<s1.rollno<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.rollno<<" "<<s2.gpa<<endl;
    cout<<s3.name<<" "<<s3.rollno<<" "<<s3.gpa<<endl;
    cout<<s5.name<<" "<<s5.rollno<<" "<<s5.gpa<<endl;
    cout<<s6.name<<" "<<s6.rollno<<" "<<s6.gpa<<endl;
    cout<<s7.name<<" "<<s7.rollno<<" "<<s7.gpa<<endl;

    return 0;
}



//Copy constructor 

// #include<iostream>
// using namespace std;

// class Student {

// public:
//     string name;
//     int roll;
//     float gpa;

//     Student(string name, int roll, float gpa) {
//         this->name = name;
//         this->roll = roll;
//         this->gpa = gpa;
//     }

//     Student(Student &s) {    //pass by reference
//         this->name = s.name;
//         this->roll = s.roll;
//         this->gpa = s.gpa;
//     }

// };

// int main() {
//     Student s1("Raghav", 76, 8.2);
//     Student s2(s1);

//     cout<<s1.name<<" "<<s1.roll<<" "<<s1.gpa<<endl;    
//     cout<<s2.name<<" "<<s2.roll<<" "<<s2.gpa<<endl;    
//     return 0;
// }