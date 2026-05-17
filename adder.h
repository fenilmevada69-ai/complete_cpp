// #ifndef ADDER_H
// #define ADDER_H
// using namespace std;

// class Adder {
// public:

//     Adder() {
//         cout << "I am constructor!" << endl;
//     }
//     int add(int a, int b) {
//         return a + b;
//     }
// };

// #endif


#include <iostream>
using namespace std;
namespace mynamespace {
    void greet() {
        cout << "Hello from mynamespace\n";
    }
}
namespace math {
    int add(int a, int b) {
        return a + b;
    }

    int sub(int a, int b) {
        return a - b;
    }
}