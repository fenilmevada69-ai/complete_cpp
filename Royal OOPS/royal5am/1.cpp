#include<iostream>
using namespace std;

class Cricket {
private:
    int playerID;
    string playerName;
    int runs;

public:
    Cricket() {
        playerID = 0;
        runs = 0;
        playerName = "";
        cout << "\nThe default constructor is called immediately" << endl;
    }

    Cricket(int id, int r, string n) {
        playerID = id;
        runs = r;
        playerName = n;
        cout << "\nThe parameterized constructor is called immediately" << endl;
    }

    void scanCricketDetails();
    void displayCricketDetails();
};

void Cricket::scanCricketDetails() {
    cout << "Enter playerId: ";
    cin >> playerID;
    cout << "Enter playerName: ";
    cin >> playerName;
    cout << "Enter the runs: ";
    cin >> runs;
}

void Cricket::displayCricketDetails() {
    cout << "Player Id: " << playerID << endl;
    cout << "Player Name: " << playerName << endl;
    cout << "Runs: " << runs << endl;
}

int main() {
    Cricket obj;
    obj.scanCricketDetails();
    cout <<endl<< "The Details are :" << endl;
    obj.displayCricketDetails();
    Cricket obj1(1, 344, "Yuv");
    obj1.displayCricketDetails();
    return 0;
}