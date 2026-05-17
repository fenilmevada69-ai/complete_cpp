#include<iostream>
using namespace std;

class Cricket {

public:
    string name;
    int runs;
    Cricket(string name, int runs) {
        this->name = name;
        this->runs = runs;  //mainly this is the main use of this keyword 
    }
};

int main() {
    Cricket c1("Virat Kohli", 25000);
    Cricket c2("Rohit Sharma", 18000);

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2.name<<" "<<c2.runs<<endl;

    return 0;
}