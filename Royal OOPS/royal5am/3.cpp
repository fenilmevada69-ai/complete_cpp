#include<iostream>
#include<string>
using namespace std;

class Cricket {

private: 
    int playerID;
    string playerName;
    int runs;
    
public:

    Cricket () {
        playerID = 0;
        playerName = "Siraj";
        runs = 20;
        cout<<"Player Id: "<<playerID<<endl;
        cout<<"Player Name: "<<playerName<<endl;
        cout<<"Runs: "<<runs<<endl;
        cout<<"I am default constructor"<<endl;
    }
    
    Cricket(int id, string name, int r) {
        playerID = id;
        playerName = name;
        runs  = r;
    }

    void scanCricketDetails();
    void displayCricketDetails();
    void getInfo();
    
};

void Cricket::scanCricketDetails () {
    cout<<"Enter player id: ";
    cin>>playerID;
    cout<<"Enter player Name: ";
    cin>>playerName;
    cout<<"Enter Runs: ";
    cin>>runs;
}

void Cricket::displayCricketDetails() {
    cout<<"Player Id: "<<playerID<<endl;
    cout<<"Player Name: "<<playerName<<endl;
    cout<<"Runs: "<<runs<<endl;
}

void Cricket::getInfo() {
    cout<<"Name: "<<playerName<<endl;
    cout<<"ID: "<<playerID<<endl;
    cout<<"Runs: "<<runs<<endl;
}

int main() {
    Cricket obj1(10, "Virat", 255);
    obj1.getInfo();
    Cricket obj2;
    cout<<"Details: "<<endl;
    obj1.scanCricketDetails();
    obj1.displayCricketDetails();
    return 0;
}