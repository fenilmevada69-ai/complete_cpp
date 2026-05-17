//Hybrid inheritence

#include<iostream>
#include<string.h>
using namespace std;

class Animal {
    int leg;
    int weight;

public:
    void scanAnimal();
    void displayAnimal();
};

void Animal::scanAnimal() {
    cout<<endl<<"Enter the number of legs and weight of animal: ";
    cin>>leg>>weight;
}

void Animal::displayAnimal() {
    cout<<endl<<leg<<endl<<weight;
}

class Bird:virtual public Animal {
    string color;
    string wings;

public:
    void scanBird();
    void displayBird();
};

void Bird::scanBird() {
    cout<<endl<<"Enter the value of color and wings: ";
    cin>>color>>wings;
}

void Bird::displayBird() {
    cout<<endl<<color<<endl<<wings;
}

class Mamel:virtual public Animal {
    int nosibling;

public:
    void scanMamel();
    void displayMamel();
};

void Mamel::scanMamel() {
    cout<<endl<<"Enter the number of sibling: ";
    cin>>nosibling;
}

void Mamel::displayMamel() {
    cout<<endl<<nosibling;
}

class Bat:public Bird, public Mamel {
    string voice;

public:
    void scanBat();
    void displayBat();
};

void Bat::scanBat() {
    cout<<endl<<"The voice of Bat: ";
    cin>>voice;
}

void Bat::displayBat() {
    cout<<endl<<voice;
}

int main() {
    Bat obj;
    obj.scanAnimal();
    obj.displayAnimal();
    obj.scanBird();
    obj.displayBird();
    obj.scanMamel();
    obj.displayMamel();
    obj.scanBat();
    obj.displayBat();
    return 0;
}