// Function Overriding
// #include<iostream>
// using namespace std;
    
// class Parent {
// public:
//     void getInfo(){
//         cout<<"Parent"<<endl;
//     }
// };

// class Child : public Parent {
// public:
//     void getInfo() {
//         cout<<"Child"<<endl;
//     }
// };

// int main() {
//     //child class Function overrides base class function
//     Child c1;
//     c1.getInfo();
//     //Here base class Function overrides child class function
//     Parent p1;
//     p1.getInfo();
//     return 0;
// }


//Virtual Funcions
#include<iostream>
using namespace std;

class Parent {
public:
    void getInfo() {
        cout<<"Parent"<<endl;
    }

    virtual void hello() {
        cout<<"hello from parent"<<endl;
    }    
};

class Child : public Parent {
public: 
    void getInfo() {
        cout<<"Child"<<endl;
    }
    void hello() {
        cout<<"hello from child"<<endl;
    }
};
    
int main() {
    Child c1;
    c1.hello();
    Parent p1;
    p1.hello();
    return 0;
}








// #include<iostream>
// using namespace std;

// class User{
// public:
//     int age;
//     int marks;
//     User(int age, int marks) {
//         this->age = age;
//         this->marks = marks;
//     }
//     User operator + (User& u) {
//         cout<<"+ operator is called"<<endl;
//         User newUser(0,0);
//         newUser.age = this->age + u.age;
//         newUser.marks = this->marks + u.marks;
//         return newUser;
//     }
//     void display() {
//         cout<<"("<<this->age<<","<<this->marks<<")"<<endl;
//     }
// };

// int main() {
//     User u1(10,20);
//     User u2(1,1);
//     u1.display();
//     u2.display();
//     User u3 = u1 + u2;
//     u3.display();
//     return 0;
// }



#include<iostream>
using namespace std;

class Balance{
public:
    int bal;
    Balance(int bal) {
        this->bal = bal;
    }
    bool operator ==(Balance& b) {
        cout<<"== operator is called"<<endl;
        return this->bal == b.bal;
    }
    void display() {
        cout<<"Balance is "<<this->bal<<endl;
    }
};
    
int main() {
    Balance c1(10000);
    Balance c2(10000);
    if(c1==c2) cout<<"Both have same balance"<<endl;
    else cout<<"Both have different balance"<<endl;
    return 0;
}












#include<iostream>
using namespace std;

// template polymorphism / ad - hoc polymorphism 
template<typename temp>
temp add(temp a, temp b) {
    return a + b;
}
    
int main() {
    cout << "Sum of integers " << add(2,3) << endl;
    cout << "Sum of floating points " << add(2.3, 4.3) << endl;
    cout << "Sum of strings " << add(string("hello"), string(" World!")) << endl;
    return 0;
}