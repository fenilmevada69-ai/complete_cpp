#include <iostream>
using namespace std;

// Base Class
class Person {
private:
    string name;
    int age;
public:
    void setPersonDetails();
    void displayPersonDetails();
};

void setPersonDetails() {
    cout<<"Enter name : "
};

// Derived Class
class Employee : public Person {
private:
    int empID;
    string department;
public:
    void setEmployeeDetails(int id, string dept) {
        empID = id;
        department = dept;
    }
    void displayEmployeeDetails() {
        displayPersonDetails();
        cout << "Employee ID: " << empID << ", Department: " << department << endl;
    }
};

// Further Derived Class
class Manager : public Employee {
private:
    int teamSize;
    string projectName;
public:
    void setManagerDetails(int size, string project) {
        teamSize = size;
        projectName = project;
    }
    void displayManagerDetails() {
        displayEmployeeDetails();
        cout << "Team Size: " << teamSize << ", Project Name: " << projectName << endl;
    }
};

// Main Function
int main() {
    Manager mgr;
    mgr.setPersonDetails("Alice", 35);
    mgr.setEmployeeDetails(1001, "IT");
    mgr.setManagerDetails(10, "AI Development");

    cout << "Manager Details:" << endl;
    mgr.displayManagerDetails();

    return 0;
}