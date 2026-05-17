// #include<iostream>
// using namespace std;

// class Student{
// protected:
//     int roll;
// public:
//     void setRoll(int roll) {
//         this->roll = roll;
//     }
//     void getRoll() {
//         cout<<this->roll<<endl;
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
//     void getMarks() {
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
//         cout<<"Score: "<<this->score<<endl;
//     }
// };

// class Result : public Test, public Sports{
// private:
//     float total;
// public:
//     Result(int roll, float m1, float m2, int score) {
//         this->roll = roll;
//         this->maths = m1;
//         this->physics = m2;
//         this->score = score;
//     }
//     void display() {
//         cout<<"Roll no : "<<this->roll<<endl;
//         cout<<"Maths: "<<this->maths<<endl;
//         cout<<"Physics: "<<this->physics<<endl;
//         cout<<"Score: "<<this->score<<endl;
//         cout<<"Total: "<<this->physics+this->maths+this->score<<endl;
//     }
// };

// int main() {
//     Result r(1,100,98,8);
//     r.display();
//     return 0;
// }



    
#include<iostream>
using namespace std;

class Student{
protected:
    int roll;
public:
    Student() {}
    Student(int roll) {
        this->roll = roll;
    }
    void getRoll() {
        cout<<this->roll<<endl;
    }
};

class Test : public virtual Student{
protected:
    float maths, physics;
public:
    Test(float m1, float m2) {
        this->maths = m1;
        this->physics = m2;
    }
    void getMarks() {
        cout<<"Maths: "<<this->maths<<endl;
        cout<<"Physics: "<<this->physics<<endl;
    }
};

class Sports : virtual public Student{
protected:
    int score;
public:
    Sports(int score){
        this->score = score;
    }
    void getScore() {
        cout<<"Score: "<<this->score<<endl;
    }
};

class Result : public Test, public Sports{
private:
    float total;
public:
    Result(int roll, float m1, float m2, int score) : Student(roll), Test(m1, m2), Sports(score) {
        this->total = this->physics+this->maths+this->score;
    }
    void display() {
        cout<<"Roll no : "<<this->roll<<endl;
        cout<<"Maths: "<<this->maths<<endl;
        cout<<"Physics: "<<this->physics<<endl;
        cout<<"Score: "<<this->score<<endl;
        cout<<"Total: "<<this->physics+this->maths+this->score<<endl;
    }
};

int main() {
    Result r(1,100,98,8);
    r.display();
    return 0;
}