// #include<iostream>
// using namespace std;
// int main() {

//     int a = 10;
//     int b = 20;
//     const int* p = &a;  //OR int const* p = &a;
//     // *p = 15;   ❌ ERROR (value is const)
//     p = &b;      // ✅ OK (pointer can change)
//     cout << *p;  // prints 20
// }




// #include<iostream>
// using namespace std;
// //inline is request not guarantee or command
// //can be used for recursive functions
// inline int factorial(int n) {
//     if (n == 0) return 1;
//     return n * factorial(n - 1);
// }    
// //can be used where there is loop
// inline void bigFunction() {
//     for(int i = 0; i < 1000; i++) {
//         cout << i << endl;
//     }
// }
// //can be used for small functions
// inline int add(int a, int b) {
//     return a + b;
// }



// OOP improves maintainability and scalability.




// #include <iostream>
// using namespace std;
// class Base {
// public:
//     Base() {
//         cout << "Base Constructor\n";
//     }
//     virtual ~Base() {
//         cout << "Base destructor\n";
//     }
// };
// class Derived : public Base {
// public:
//     Derived() {
//         cout << "Derived Constructor\n";
//     }
//     ~Derived() {
//         cout << "Derived destructor\n";
//     }
// };
// int main() {
//     Base* b = new Derived();
//     delete b;
// }



// #include<iostream>
// using namespace std;
// class Student {
//     int marks;
//     mutable int changeAble;
// public:
//     Student(int m) : marks(m) {}

//     int getMarks() const {   // const member function
//         // this->marks = 23;      // ❌ ERROR    You cannot modify data member inside const member function 
//         return marks;
//         // setMarks(100);         // ❌ ERROR    You cannot call non constant member functions
//         call();
//     }

//     void call() const {
//         cout << "Hellow" << endl;
//     }

//     void setMarks(int m) {
//         marks = m;
//     }
// };    
// int main() {
//     const Student s(90);    //constant object Can only call const member function
//     // s.setMarks(199);        // ❌ ERROR
//     cout << s.getMarks() << endl;
//     return 0;
// }






// #include<iostream>
// using namespace std;
// class Number {
//     public:
//         int x;
//         Number(int x) {
//             this->x = x;
//         }
//         void show() {
//             cout << this->x << endl;
//         }
//         friend Number operator-(const Number&);
// };
// Number operator-(const Number& x) {
//     return Number(-x);
// }
// int main() {
//     Number n1(10);
//     n1.show();
//     Number n2 = -n1;
//     n2.show();
//     return 0;
// }




// #include<iostream>
// #define SQUARE(x) ((x)*(x))
// using namespace std;    
// int main() {
//     int y = SQUARE(2+3);
//     cout << y;
//     return 0;
// }


//Use this instead define and typedef    
// typedef vector<int> vi;
// using vi = vector<int>;
// #define SIZE1 10
// constexpr int SIZE2 = 10;
// int main() {
//     return 0;
// }




// enum Color {RED, GREEN, WHITE, BLUE};           //not recommended
// enum class Color {RED, GREEN, WHITE, BLUE};     //recommended




#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<string>
using namespace std;
// int main()
// {
//     string name = "Hellow";
//     for(char& i : name){
//         i = tolower(i);
//     }
//     cout << name << endl;
//     return 0;
// }



// int main() {
//     cout << sizeof(short int) << endl;
//     cout << sizeof(short) << endl;
//     cout << sizeof(int) << endl;
//     cout << sizeof(long int) << endl;
//     cout << sizeof(long) << endl;
//     cout << sizeof(long long int) << endl;
//     cout << sizeof(long long) << endl;
//     cout << sizeof(int32_t) << endl;
//     cout << sizeof(uint32_t) << endl;
//     int fun = 0x16;     //for hexadecimal(0x)
//     cout << fun << endl;
//     fun = 0b00010110;   //for binary(0b)
//     cout << fun << endl;
//     if(NULL) cout << "Hello" << endl;
//     int arr[] = {1,2,3,4};
//     cout << arr[5] << endl;     //gives garbage
//     char str[] = {'a','b','c','d','\0'};
//     for(char* ptr=&str[0]; *ptr!='\0'; ptr++) {
//         cout << *ptr << " ";
//     }cout<<endl;
//     return 0;
// }



// int main()
// {
//     const char* name = "Hellow";
//     cout << name << endl;
//     name = "World";
//     cout << name << endl;
//     return 0;
// }




// enum Days {
//     SUNDAY = 6, MONDAY = 8, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
// };



// #include<typeinfo>
// int main()
// {
//     string s = "Hellow";
//     if(typeid(s) == typeid(string)) cout << "Same" << endl;
//     return 0;
// }





// #include<iostream>
// #include "adder.h"
// using namespace std;
// namespace mynamespace {
//     int x = 10;

//     void greet() {
//         std::cout << "Hello from mynamespace\n";
//     }
// }
// namespace math {
//     int add(int a, int b) {
//         return a + b;
//     }

//     int sub(int a, int b) {
//         return a - b;
//     }
// }
// int main() {
//     mynamespace::greet();
//     cout << math::add(1, 2) << endl;
//     return 0;
// }




//functional Pointers
// int getTwo() {return 2;}
// void interesting() {cout << "intersesting" << endl;}
// int main() {
//     int whatIGot = getTwo();
//     cout << whatIGot << endl;
//     interesting();
//     void (*pointsToInteresting)() = interesting;    
//     pointsToInteresting();          //Both Are correct!
//     (*pointsToInteresting)();       //Both Are correct!
//     return 0;
// }



// #define END return 0
// #define ENDMESSAGE cout << "Program ends here" << endl
// #define console_log(a) cout << a << endl
// typedef float real;
// int main() {
//     int a = 10;
//     console_log(a);
//     string s = "Hellow";
//     console_log(s);
//     ENDMESSAGE;
//     END;
// }




// template<typename T>
// void func(T myName) {
//     cout << "one func: " << myName << endl;
// }   //... is known as variadic parameter
// template<typename T, typename... Args>
// void func(T t, Args... arg) {
//     cout << "Two func: " << t << endl;
//     func(arg...);       //recursion
// }
// int main() {
//     string myName = "hitesh";
//     func(myName);
//     func(1,2,3,6.4,3.2,6.2,2,"LAst");
//     return 0;
// }



    
// class Phone {
//     private:
//         string name = "samsung";
//         string os; 
//         int price = 0;
//     public:
//         Phone(string os, int price) {
//             this->name = "SmasunG";
//             this->os = os;
//             this->price = price;
//         }
//         // Phone();
//         // Phone(const string& name, const string& os, const int& price);
//         // Phone(const Phone&);
//         // Phone(string name, string os, int price);
//         string getName() {return this->name;};
//         int getPrice() {return this->price;};
//         ~Phone();
// };
// Phone::Phone(string name, string os, int price) {
//     this->name = name;
//     this->os = os;
//     this->price = price;
// }
// Phone::Phone : name(), os(), price() {
//     cout << "Default constructor!" << endl;
// }
// Phone::Phone(const Phone& phone) {
//     this->name = phone.name;
//     this->price = phone.price;
//     this->os = phone.os;
//     cout << phone.name << " is copied to " << this->name << endl;
// }
// Phone::~Phone() {
//     cout << this->name << " is Destructed" << endl;
// }
// Phone::Phone() : name("Samsung"), os(), price() {
//     cout << "Default constructor!" << endl;
// }
// Phone::Phone(const string& name, const string& os, const int& price) : name(name), os(os), price(price) {
//     cout << "Parametric constructor!" << endl;
// }
// int main() {
//     // Phone p1;
//     // cout << p1.getName() << endl;
//     // cout << p1.getPrice() << endl;
    
//     // Phone p2("Apple", "IOS", 10000);
//     // cout << p2.getName() << endl;
//     // cout << p2.getPrice() << endl;
    
//     // Phone p3(p2);
//     // cout << p2.getName() << endl;
//     // cout << p2.getPrice() << endl;

//     Phone p4("Android", 20000);
//     cout << p4.getName() << endl;
//     cout << p4.getPrice() << endl;
//     return 0;
// }


// struct Corners{
//     float a,b,c,d;
// };
// //operator overloading!
// ostream& operator<<(ostream& os, const Corners& c) {
//     os << c.a << " " << c.b << " " << c.c << " " << c.d;
//     return os;
// }
// int main(){
//     vector<Corners> vec;
//     vec.push_back({1,2,3,4});
//     vec.push_back({5,6,7,8});
//     for(int i=0; i<vec.size(); i++) {
//         cout << vec[i] << endl;
//     }
//     return 0;
// }

    
// int main() {
//     //Lambdas    
//     []{cout << "Hello i am lambda function!";}();
//     [](){return 100;};
//     auto sum = [](auto a, auto b){return a + b;};
//     cout << sum(2,3) << endl;
//     cout << sum(2.4 , 3.2) << endl;
//     cout << sum((string)"Hello" , (string)"World") << endl;
//     return 0;
// }



    
// int main() {
//     vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
//     vector<string> heros {"Ironman", "Captain America", "Hulk", "Thor"};    //vector of strings 
//     for(auto val : vec) {
//         cout << val << " ";
//     }cout<<endl;
//     partition(vec.begin(), vec.end(), [](int x) {return x%2==0;});  //algorithm
//     // partition(begin(vec), end(vec), [](int x) {return x%2==0;});  //algorithm
//     // stable_partition(vec.begin(), vec.end(), [](int x) {return x%2==0;});  //it tries to maintain the order but not recommended
//     for(auto val : vec) {
//         cout << val << " ";
//     }
//     return 0;
// }