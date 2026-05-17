//Problem in dma by using shalow copy 
// #include<iostream>
// using namespace std;

// class Student {

// public:
//     string name;
//     double* cgpaPtr;

//     Student(string name, double cgpa) {
//         this->name = name;
//         this->cgpaPtr = new double;
//         *cgpaPtr = cgpa;
//     }

//     Student(Student &orgObj) {
//         this->name = orgObj.name;
//         this->cgpaPtr = orgObj.cgpaPtr;
//     }

//     void getInfo() {
//         cout<<this->name<<" "<<*this->cgpaPtr<<" "<<endl;
//     }

// };

// int main() {
//     Student s1("Raghav", 8.2);
//     s1.getInfo();
//     Student s2(s1);
    
//     *(s2.cgpaPtr) = 9.2;
//     s2.getInfo();
//     s1.getInfo();

//     return 0;
// }

//So we use deep copy
#include<iostream>
using namespace std;

class Student {

public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa) {
        this->name = name;
        this->cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &orgObj) {
        this->name = orgObj.name;
        cgpaPtr = new double;
        *cgpaPtr = *orgObj.cgpaPtr;
    }

    void getInfo() {
        cout<<this->name<<" "<<*this->cgpaPtr<<" "<<endl;
    }

};

int main() {
    Student s1("Raghav", 8.2);
    s1.getInfo();
    Student s2(s1);
    
    *(s2.cgpaPtr) = 9.2;
    s2.getInfo();
    s1.getInfo();

    return 0;
}