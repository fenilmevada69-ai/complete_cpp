#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator {
public:
    int a,b;
    SimpleCalculator(int a, int b) {
        this->a = a;
        this->b = b;
    }
    void sum() {
        cout<<"Sum is "<<this->a+this->b<<endl;
    }
    void sub() {
        cout<<"Sub is "<<this->a-this->b<<endl;
    }
    void mul() {
        cout<<"Mul is "<<this->a*this->b<<endl;
    }
    void div() {
        if(this->b==0) cout<<"Cannot divide by zero"<<endl;
        else cout<<"Div is "<<this->a/this->b<<endl;
    }
    void show() {
        cout<<"Simple Calculator"<<endl;
        cout<<"a = "<<this->a<<endl<<"b = "<<this->b<<endl;
        sum();
        sub();
        mul();
        div();
    }
};

class ScientificCalculator {
public:
    int a,b;
    ScientificCalculator(int a, int b) {
        this->a = a;
        this->b = b;
    }
    void sqroot() {
        cout<<"Sqaure root of "<<this->a<<" is "<<sqrt(this->a)<<endl;        
        cout<<"Sqaure root of "<<this->b<<" is "<<sqrt(this->b)<<endl;        
    }
    void cbroot() {
        cout<<"Cube root of "<<this->a<<" is "<<cbrt(this->a)<<endl;        
        cout<<"Cube root of "<<this->b<<" is "<<cbrt(this->b)<<endl;        
    }
    void log() {
        cout<<"Log of "<<this->a<<" is "<<std::log(this->a)<<endl;
        cout<<"Log of "<<this->b<<" is "<<std::log(this->b)<<endl;
    }
    void sine() {
        cout<<"Sine of "<<this->a<<" is "<<sin(this->a)<<endl;
        cout<<"Sine of "<<this->b<<" is "<<sin(this->b)<<endl;
    }
    void tanjant() {
        cout<<"tan of "<<this->a<<" is "<<tan(this->a)<<endl;
        cout<<"tan of "<<this->b<<" is "<<tan(this->b)<<endl;
    }
    void show() {
        cout<<"Scientific Calculator"<<endl;
        cout<<"a = "<<this->a<<endl<<"b = "<<this->b<<endl;
        sqroot();
        cbroot();
        log();
        sine();
        tanjant();
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{
public:
    HybridCalculator(int a, int b) : SimpleCalculator(a,b) , ScientificCalculator(a,b) {
        
    }
    void show() {
        cout<<"Hybrid Calc"<<endl;
        SimpleCalculator::show();
        ScientificCalculator::show();
    }
};

int main() {
    SimpleCalculator simc(10,5);
    simc.show();
    ScientificCalculator scic(10,20); 
    scic.show();
    HybridCalculator hyrc(10,20);
    hyrc.show();
    return 0;
}