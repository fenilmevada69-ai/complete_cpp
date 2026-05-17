#include<iostream>
using namespace std;

class A{
public:
    int a;
    A(int a) {
        this->a = a;
    }   
};

class B : virtual public A{
public:
    int b;
    B(int a, int b) : A(a) {
        this->b = b;
    }
};

class C : virtual public A{
public:
    int c;
    C(int a, int c) : A(a) {
        this->c = c;
    }
};

class D : public B, public C{
public:
    int d;
    D(int a, int b, int c, int d) : A(a), B(a,c), C(a,c) {
        this->d = d;
    }
};

int main() {
    D d(1,2,3,4);
    cout<<d.a<<" "<<d.b<<" "<<d.c<<" "<<d.d<<endl;
    return 0;
}








// #include<iostream>
// using namespace std;

// class Student{
// protected:
//     int rollno;
// public:
//     void setNum(int a) {
//         this->rollno = a;
//     }
//     void getNum() {
//         cout<<this->rollno<<endl;
//     }
// };

// class Test : virtual public Student{
// protected:
//     float maths, physics;
// public:
//     void setMarks(int m1, int m2) {
//         this->maths = m1;
//         this->physics = m2;
//     }
//     void printMarks() {
//         cout<<"Your result : "<<endl;
//         cout<<"Maths: "<<this->maths<<endl;
//         cout<<"Physics: "<<this->physics<<endl;
//     }
// };

// class Sports : virtual public Student{
// protected: 
//     int score;
// public:
//     void setScore(int s) {
//         this->score = s;
//     }
//     void getScore() {
//         cout<<"Your PT Score is : "<<this->score<<endl;
//     }
// };

// class Result : public Test, public Sports{
// private:
//     float total;
// public:
//     Result(int a, int m1, int m2, int s) {
//         this->setNum(a);
//         this->setMarks(m1, m2);
//         this->setScore(s);
//     }
//     void display() {
//         total = maths + physics + score;
//         this->getNum();
//         this->printMarks();
//         this->getScore();
//         cout<<"Your Total is : "<<total<<endl;
//     }
// };

// int main() {
//     Result s1(101, 100, 100, 100);
//     s1.display();
//     return 0;
// }