#include<iostream>
using namespace std;

class Cricketer {

public:
    string name;  
    int runs;
    float avg;

    Cricketer(string name, int runs, float avg) {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

};

void change(Cricketer* c) {
    // (*c).avg = 60.5;
    c->avg = 60.5;
}

int main() {
    Cricketer c1("Virat Kohli", 25000, 55.7);

    cout<<c1.avg<<endl;
    change(&c1);
    cout<<c1.avg<<endl;
    
    // Cricketer c2("Rohit Sharma", 18000, 47.5);

    // Cricketer* ptr = &c1;

    // cout<<ptr->runs<<endl;
    // cout<<(*ptr).runs<<endl;
    return 0;
}