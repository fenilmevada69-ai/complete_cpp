// A smart parking lot works like this:
// Regular cars enter from the back
// VIP / Emergency vehicles enter from the front
// Parking spots are limited
// Cars can leave from front or back
// A specific car can leave from the middle
// Admin can view, search, and reset the parking system

// students must implement:
// Add regular car (back)
// Add VIP car (front)
// Remove front car (exit gate 1)
// Remove back car (exit gate 2)
// Remove car by number (middle erase)
// Display all parked cars (index + iterator)
// Search car
// Show total cars
// Clear parking lot



#include<iostream>
#include<deque>
using namespace std;
int MAX_PARKING = 10;

void addCar(deque<string>& d, string car) {
    if(d.size() == MAX_PARKING) {
        cout<<"Parking is full"<<endl;
        return;
    }
    if(car.find("RC") != string::npos) d.push_back(car);       
    else if(car.find("VIP") != string::npos) d.push_front(car);
    else cout<<"Invalid car type"<<endl;
}

void show(const deque<string>& d) {
    for(int i=0; i<d.size(); i++) {
        cout << d[i] << endl;
    }
}

void removeFront(deque<string>& d) {
    if(d.size() == 0) {
        cout<<"Parking is empty"<<endl;
        return;
    }
    d.pop_front();
}

void removeBack(deque<string>& d) {
    if(d.size() == 0) {
        cout<<"Parking is empty"<<endl;
        return;
    }
    d.pop_back();
}

void reset(deque<string> &d) {
    if(d.size() == 0) {
        cout<<"Parking is already empty"<<endl;
        return;
    }
    d.clear();
}

void search(const deque<string>& d, string car) {
    if(d.size() == 0) {
        cout << "Parking is empty" << endl;
        return;
    }
    for(string s : d) {
        if(s == car) {
            cout<<"Car found"<< " : ";
            cout << s << endl;
            return;
        }
    }
    cout<<"Car not found"<<endl;
}

void removeCar(deque<string>& d, string car){ 
    if(d.size() == 0) {
        cout<<"Parking is empty"<<endl;
        return;
    }
    // for(int i=0; i<d.size(); i++) {
    //     if(d[i] == car) {
    //         d.erase(d.begin() + i);
    //         return;
    //     }
    // }   
    for(auto it=d.begin(); it!=d.end(); it++){
        if((*it) == car) {
            cout << "Car removed : " << *it << endl;
            d.erase(it);
            return;
        }
    }
    cout<<"Car not found"<<endl;
}

int main() {
    deque<string> d;
    addCar(d, "1324 RC");
    addCar(d, "7234 RC");
    addCar(d, "3264 VIP");
    addCar(d, "9249 VIP");
    show(d);
    search(d, "1324 RC");
    removeCar(d, "1324 RC");
    show(d);
    reset(d);
    return 0;
}















