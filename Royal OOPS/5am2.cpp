#include<iostream>
#include<string>
using namespace std;

class Person {
private:
    string name;
    string address;
    double phone;
    int height;
    int width;

public:
    void scanPerson();
    void displayPerson();
};

void Person::scanPerson() {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter address: ";
    cin >> address;
    cout << "Enter phone: ";
    cin >> phone;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter width: ";
    cin >> width;

}


void Person::displayPerson() {
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Phone: " << phone << endl;
    cout << "Height: " << height << endl;
    cout << "Width: " << width << endl;
}

int main() {
    Person p1;
    p1.scanPerson();
    p1.displayPerson();
    return 0;
}

