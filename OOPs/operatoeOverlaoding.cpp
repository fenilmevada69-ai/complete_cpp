#include<iostream>
using namespace std;

class Counter{
public:
    int value;
    Counter(int v) {
        this->value = v;
    }
    void operator ++() {
        cout<<"++(pre) operator overloaded"<<endl;
        this->value++;
    }
    void operator ++(int) {
        cout<<"++(post) operator overloaded"<<endl;
        this->value++;
    }
    void display() {
        cout<<"Value of value is: "<<this->value<<endl;
    }
};

int main() {
    Counter c1(100);
    c1.display();
    ++c1;
    c1.display();
    c1++;
    c1.display();
    return 0;
}





// #include<iostream>
// using namespace std;

// class Complex{
// public:
//     int real;
//     int img;
//     Complex(int img, int real) {
//         this->img = img;
//         this->real = real;
//     }
//     Complex operator +(Complex &c) {
//         Complex ans(0,0);
//         ans.real = this->real + c.real;
//         ans.img = this->img + c.img;
//         return ans;
//     }
//     void display() {
//         cout<<"Complex number is : "<<this->real<<"+"<<this->img<<"i"<<endl;
//     }
// };

// int main() {
//     Complex c1(3,2);
//     Complex c2(2,4);
//     c1.display();
//     c2.display();
//     Complex c3 = c1+c2;
//     c3.display();
//     return 0;
// }







// #include <iostream>
// using namespace std;

// class Counter {
// public:
//     int value;

//     Counter(int v) {
//         value = v;
//     }

//     Counter operator++() {
//         ++this->value;
//         return *this; 
//     }

//     Counter operator++(int) {
//         Counter temp(*this);
//         this->value++;
//         return temp;
//     }

//     void show() const{ 
//         cout << this->value << endl;
//     }
// };

// int main() {
//     Counter c1(10);
//     c1.show();
//     ++c1;
//     c1.show();
//     c1++;
//     c1.show();
//     return 0;
// }
