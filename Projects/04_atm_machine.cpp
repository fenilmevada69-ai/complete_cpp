#include <iostream>
#include <cstdlib>
using namespace std;

class ATM {
private:
    int balance;
    int pinCode;

public:
    ATM(int balance, int pin) {
        this->balance = balance;
        this->pinCode = pin;
    }

    int getBalance() {
        return balance;
    }

    bool withdraw(int amount, int pin) {
        if (pin != pinCode) {
            cout << "Invalid PIN\n";
            return false;
        }
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            return true;
        }
        return false;
    }

    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    bool transfer(int amount, ATM& receiver, int pin) {
        if (withdraw(amount, pin)) {
            receiver.deposit(amount);
            return true;
        }
        return false;
    }
};

int main() {
    ATM atm(1000,1223);
    ATM atm1(1000, 1223);
    ATM atm2(500, 4321);

    char cont;

    do {
        system("cls"); // optional (Windows only)

        cout << "\n1. View Balance\n";
        cout << "2. Withdraw\n";
        cout << "3. Deposit\n";
        cout << "4. Transfer\n";
        cout << "5. Exit\n";

        int option;
        cout << "Enter your choice: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Your balance is: " << atm.getBalance();
                break;

            case 2: {
                int amount;
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                int pin;
                cout << "Enter your pin: ";
                cin >> pin;
                if (atm.withdraw(amount, pin)){
                    cout << "Withdrawal successful. Balance: " << atm.getBalance();
                } else {
                    cout << "Withdrawal failed. Insufficient balance.";
                }
                break;
            }

            case 3: {
                int amount;
                cout << "Enter amount to deposit: ";
                cin >> amount;
                atm.deposit(amount);
                cout << "Deposit successful. Balance: " << atm.getBalance();
                break;
            }
            
            case 4: {
                int amount, pin;
                cout << "Enter amount: ";
                cin >> amount;
                cout << "Enter pin code: ";
                cin >> pin;
                        
                if (atm.transfer(amount, atm2, pin)) {
                    cout << "Transfer successful.\n";
                    cout << "Your balance: " << atm.getBalance();
                    cout << "\nReceiver balance: " << atm2.getBalance();
                } else {
                    cout << "Transfer failed.";
                }
                break;
            }


            case 5:
                cout << "Exiting...\n";
                return 0;

            default:
                cout << "Invalid choice.";
        }

        cout << "\nDo you want to continue [Y/N]: ";
        cin >> cont;

    } while (cont == 'Y' || cont == 'y');

    return 0;
}