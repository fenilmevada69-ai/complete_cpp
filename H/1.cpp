#include<iostream>
using namespace std;

class Binary {
private:
    string str;
public:
    void readBin();    
    void checkBin();
    void printBin();
    void onceComp();
};

void Binary:: readBin() {
    cout<<"Enter a Binary number: ";
    cin>>str;
}

void Binary:: checkBin() {
    for(int i=0; i<str.length(); i++) {
        if(str.at(i)!= '0' && str.at(i)!='1') {
            cout<<"Incorrect number"<<endl;
            exit(0);
        }
    }
}

void Binary:: printBin() {
    cout<<"Binary number is "<<endl;
    for(int i=0; i<str.length(); i++) {
        cout<<str.at(i);
    }
    cout<<endl;
}

void Binary:: onceComp() {
    for(int i=0; i<str.length(); i++) {
        if(str.at(i)=='0') str.at(i)='1';
        else if(str.at(i)=='1') str.at(i)='0';
    }
}

int main() {
    Binary b1;
    b1.readBin();
    b1.checkBin();
    b1.printBin();
    b1.onceComp();
    b1.printBin();
    return 0;
}