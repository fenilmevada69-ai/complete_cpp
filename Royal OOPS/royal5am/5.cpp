#include<iostream>
#include<string>
using namespace std;

class Student {

private:
    int id,m1,m2,m3;
    string name;

public: 

    Student() {
        id=0;
        m1=m2=m3=0;
        cout<<"The default constructor is called"<<endl;
    }
    
    Student(int ID, int M1, int M2, int M3, string Name) {
        id = ID;
        m1 = M1;
        m2 = M2;
        m3 = M3;
        name = Name;
        // strcpy(name, Name);
        cout<<"The parameterized constructor is called"<<endl;
    }
    
    void scandata();
    void displaydata();

};

void Student::scandata() {
    cout<<"Enter id, marks 1, marks 2, marks 3, Name: "<<endl;
    cin>>id>>m1>>m2>>m3>>name;
}

void Student::displaydata() {
    cout<<"Students Details are: ";
    cout<<id<<endl<<m1<<endl<<m2<<endl<<m3<<endl<<name<<endl;
}

int main() {
    Student obj;
    obj.scandata();
    obj.displaydata();
    return 0;
}