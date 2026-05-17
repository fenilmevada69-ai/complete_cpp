#include<iostream>
using namespace std;

class Vehicle{ 
    private:
        string make, model;
        int year;
    public:
        void inputData() {
            cout << "Enter Company Name: ";
            cin >> this->make;
            cout << "Enter Model Name: ";
            cin >> this->model;
            cout << "Enter Year: ";
            cin >> this->year;
        }
        void display() {
            cout << "Company Name: " << this->make << endl;
            cout << "Model Name: " << this->model << endl;
            cout << "Year: " << this->year << endl;
        }

};

class Car : public Vehicle {
    private:
        int numOfDoor;
    public:
        void inputData() {
            Vehicle::inputData();
            cout << "Enter number of door: "; 
            cin >> this->numOfDoor;
        }
        void display() {
            Vehicle::display();
            cout << "Number of door: " << this->numOfDoor << endl;
        }
};

class ToyotaCar:  public Car{ 
    private:
        string trimLevel;
    public:
        void inputData() {
            Car::inputData();
            cout << "Enter Trim Level: ";
            cin >> this->trimLevel;
        }
        void display() {
            Car::display();
            cout << "Trim Level: " << this->trimLevel << endl;
        }
};
    
int main() {
    ToyotaCar myCar;
    cout << "=========Input Car Info=========" << endl;
    myCar.inputData();
    cout << "=========Output Car Info=========" << endl;
    myCar.display();
    return 0;
}