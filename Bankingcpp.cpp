#include<iostream>
using namespace std;

class Customer{ 
    protected:
        string name;
        int id;

    public:
        void setCustomerDetails() {
            cout << "Enter Customer name: ";
            getline(cin, name);
            cout << "Enter Customer id: ";
            cin >> id;
            this->name = name;
            this->id = id;
        }

        void getCustomerDetails() {
            cout << "Customer Deatils: " << endl;
            cout << "Name: " << this->name << endl;
            cout << "Id: " << this->id << endl;
        }
};

class Account : public Customer {
    protected:
        long accNo;
        double accBalance;
    public:
        void createAccount() {
            cout << "Enter account number: ";
            cin >> this->accNo; 
            cout << "Enter account balance: ";
            cin >> this->accBalance;
        }
        void deposit(double amount) {
            if(amount > 0) {
                this->accBalance += amount;
                cout << amount << " has been deposited" << endl;
            } else{ 
                cout << "Invalid amount" << endl;
            }
        }

        void withdraw(double amount) {
            if(amount > 0 && amount <= this->accBalance) {
                this->accBalance -= amount;
                cout << amount << " has been withdrawn" << endl;
            } else {
                cout << "Invalid amount" << endl;
            }
        }

        void getAccountDetails() {
            Customer::getCustomerDetails();
            cout << "Account number: " << this->accNo << endl;
            cout << "Account balance: " << this->accBalance << endl;
        }
};

class SavingAccount : public Account {
    private:
        double interestRate;
    public:
        SavingAccount() {
            interestRate = 0.0;
        }

        void setInterestRate(double rate) {
            if(rate > 0) this->interestRate = rate;
            else cout << "Invalid interest rate" << endl;
        }

        void calculateInterest() {
            double intAmount = this->accBalance * this->interestRate / 100;
            this->accBalance += intAmount;
            cout << "Interest amount: " << intAmount << endl;
        } 

        void displayFinalBalance() {
            Account::getAccountDetails();
            cout << "Interset Rate: " << this->interestRate << endl;
            cout << "Final balance: " << this->accBalance << endl;
        }
};

int main() {
    SavingAccount sa;
    sa.setCustomerDetails();
    sa.createAccount();
    double depAmount;
    cout << "Enter amount to deposit: ";
    cin >> depAmount;
    sa.deposit(depAmount);

    double withdraw;
    cout << "Enter amount to withdraw: ";
    cin >> withdraw;
    sa.withdraw(withdraw);

    double interestRate;
    cout << "Enter interest rate: ";
    cin >> interestRate;
    sa.setInterestRate(interestRate);
    sa.calculateInterest();
    sa.displayFinalBalance();
    return 0;
}