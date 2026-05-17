//Method 1
// #include<iostream>
// using namespace std;

// class Cricket {

// public:
//     string name;
//     int runs;
//     float avg;
//     Cricket(string name, int runs, float avg) {
//         this->name = name;
//         this->runs = runs;  //mainly this is the main use of this keyword 
//         this->avg = avg;
//     }
// };

// void print(Cricket c) {
//     cout<<c.name<<"  "<<c.runs<<"  "<<c.avg<<endl; 
// }

// int main() {
//     Cricket c1("Virat Kohli", 25000, 55.7);
//     Cricket c2("Rohit Sharma", 18000, 45.9);

//     print(c1);
//     print(c2);

//     return 0;
// }

//method 2
// #include<iostream>
// using namespace std;

// class Cricket {

// public:
//     string name;
//     int runs;
//     float avg;
//     Cricket(string name, int runs, float avg) {
//         this->name = name;
//         this->runs = runs;  //mainly this is the main use of this keyword 
//         this->avg = avg;
//     }

//     void print() {
//         cout<<name<<"  "<<runs<<"  "<<avg<<endl; 
//     }
// };


// int main() {
//     Cricket c1("Virat Kohli", 25000, 55.7);
//     Cricket c2("Rohit Sharma", 18000, 45.9);

//     c1.print();
//     c2.print();

//     return 0;
// }




// #include<iostream>
// using namespace std;

// class Cricket {

// public:
//     string name;
//     int runs;
//     float avg;
//     Cricket(string name, int runs, float avg) {
//         this->name = name;
//         this->runs = runs;  //mainly this is the main use of this keyword 
//         this->avg = avg;
//     }

//     void print(int runs) {
//         cout<<this->name<<"  "<<this->runs<<"  "<<this->avg<<endl; 
//         cout<<runs<<endl;        //reason to use this keyword here 
//     }
// };


// int main() {
//     Cricket c1("Virat Kohli", 25000, 55.7);
//     Cricket c2("Rohit Sharma", 18000, 45.9);

//     c1.print(56);
//     c2.print(46);

//     return 0;
// }






#include<iostream>
using namespace std;

class Cricket {

public:
    string name;
    int runs;
    float avg;
    Cricket(string name, int runs, float avg) {
        this->name = name;
        this->runs = runs;  //mainly this is the main use of this keyword 
        this->avg = avg;
    }

    void print(int runs) {
        cout<<this->name<<"  "<<this->runs<<"  "<<this->avg<<endl; 
        cout<<runs<<endl;
    }

    int matches() {
        return this->runs/this->avg;
    }
};


int main() {
    Cricket c1("Virat Kohli", 25000, 55.7);
    Cricket c2("Rohit Sharma", 18000, 45.9);

    c1.print(56);
    c2.print(46);
    cout<<c1.matches()<<endl;
    cout<<c2.matches()<<endl;

    return 0;
}