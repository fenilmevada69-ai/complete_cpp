//Encapsulaion
#include<iostream>
using namespace std;

class BankAccount{
private:
    string AccountId;
    double balance;
    
public:
    BankAccount(string AccounId, double balance) {
        this->AccountId = AccounId;
        this->balance = balance;
    }

    double getBalance() {
        return this->balance;
    }

    void deposit(double amount) {
        if(amount>0) {
            this->balance += amount;
            cout<<"Deposited Amount: "<<amount<<endl;
        }
        else cout<<"Invalid Amount"<<endl;
    }

    void withdraw(double amount) {
        if(amount>0 && amount <= this->balance) {
            this->balance -= amount;
            cout<<"Withdrawn Amount: "<<amount<<endl;
        }
        else cout<<"Invalid Amount"<<endl;
    }
};

int main() {
    BankAccount c1("ADXCS12333", 500);
    cout<<"Current Balance is : "<<c1.getBalance()<<endl;
    c1.deposit(1500);
    cout<<"Current Balance is : "<<c1.getBalance()<<endl;
    c1.withdraw(100);
    cout<<"Current Balance is : "<<c1.getBalance()<<endl;
    return 0;
}



// #include<iostream>
// using namespace std;

// class BankAccount {
// private:
//     double balance;
// public:
//     string accountId;
//     string name;
//     BankAccount(string name, string accountId) {
//         this->name = name;
//         this->accountId = accountId;
//         this->balance = 0;
//     }
//     void getbBalance() {
//         cout<<this->balance<<endl;
//     }
//     void display() {
//         cout<<this->name<<" "<<this->accountId<<" "<<this->balance<<endl;
//     }
//     void deposit(double amount) {
//         this->balance += amount;
//         cout<<"Deposited : "<<amount<<endl;
//     }
//     void withdraw(double amount);
// };

// void BankAccount :: withdraw(double amount) {
//     this->balance -= amount;
//     cout<<"Withdrawn : "<<amount<<endl;
// }

// int main() {
//     BankAccount c1("Rahul", "1234");
//     c1.getbBalance();
//     c1.deposit(10000);
//     c1.getbBalance();
//     c1.withdraw(5000);
//     c1.getbBalance();
//     return 0;
// }