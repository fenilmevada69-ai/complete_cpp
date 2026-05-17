#include<iostream>
using namespace std;
class demo1 {
    public: //data
    int n;
    void getdata() { //member function
        cout<<"Enter a number : ";
        cin>>n;
    } //function call
};
class demo2 : public demo1 {
    public: 
    void display()
    {
        demo1::getdata();
        cout<<"Number is : "<<n;
    }
};
int main() 
{
    demo2 D;
    D.display();    //function call
}