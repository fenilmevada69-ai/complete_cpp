//Use either parameterized constructor or inline constructor
#include<iostream>
using namespace std;

class Customer{
public:
    string name;
    int account_number;
    int balance;

    //parameterized constructor
    // Customer(string name, int account_number, int balance) {
    //     this->name = name;
    //     this->account_number = account_number;
    //     this->balance = balance;
    // }

    //Inline Constructor
    inline Customer(string name, int account_number, int balance) : name("Rahul"), account_number(1234), balance(25000) {

    }

    void getInfo() {
        cout<<this->name<<" "<<this->account_number<<" "<<this->balance<<endl;
    }
}; 

int main() {
    Customer c1("Rahul", 1234, 10000);
    
    c1.getInfo();
    return 0;
}