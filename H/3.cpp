//Problem Code
// #include<iostream>
// using namespace std;
// class Employee{
//     int id;
//     int count=0;
//     public:
//         void setData();
//         void getData();
// };
// void Employee :: setData() {
//     cout<<"Enter the id: ";
//     cin>>id;
//     count++;
// }
// void Employee :: getData() {
//     cout<<"The Id of this employee is "<<id<<" and the employee number is "<<count<<endl;
// }
// int main() {
//     Employee e1,e2,e3;
//     e1.setData();
//     e1.getData();
//     e2.setData();
//     e2.getData();
//     e3.setData();
//     e3.getData();
//     return 0;
// }


//Solved Code
#include<iostream>
using namespace std;
class Employee{
    int id;
    static int count;   //you cant initialize here
    public:
        void setData();
        void getData();
        void getCount();
};  
int Employee :: count;  //you can initial here
void Employee :: setData() {
    cout<<"Enter the id: ";
    cin>>id;
    count++;
}
void Employee :: getData() {
    cout<<"The Id of this employee is "<<id<<" and the employee number is "<<count<<endl;
}
void Employee :: getCount(){ 
    cout<<"The value of count is "<<count<<endl;
}
int main() {
    Employee e1,e2,e3;
    e1.setData();
    e1.getData();
    e1.getCount();
    
    e2.setData();
    e2.getData();
    e2.getCount();
    
    e3.setData();
    e3.getData();
    e3.getCount();
    return 0;
}