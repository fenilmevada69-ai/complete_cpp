//Recomended
#include<iostream>
using namespace std;

class Person {
    
    public:    
    string name;
    int age;
    
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
    
};

class Student : public Person {
    
    public:
    int roll;
    
    Student(string name, int age, int roll) : Person(name, age){ 
        this->roll = roll;
    }
    
    void getInfo() {
        cout<<this->name<<" "<<this->age<<" "<<this->roll<<" "<<endl;
    }
    
};

int main() {
    Student s1("Rhagav", 101, 12);
    s1.getInfo();
    return 0;
}

//Not Recomended

// #include<iostream>
// using namespace std;

// class Person {
// public:
//     string name;
//     int age;

//     Person() {
        
//     }
// };

// class Student : public Person{
// public: 
//     int roll;

//     Student(string name, int age, int roll) {
//         this->name = name;
//         this->age = age;
//         this->roll = roll;
//     }
// };

// int main() {
//     Student p1("Raghav", 21, 101);
//     cout<<p1.name<<" "<<p1.age<<" "<<p1.roll<<endl;
//     return 0;
// }