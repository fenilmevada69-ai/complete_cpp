//Statical allocation

// #include<iostream>
// using namespace std;
    
// int main() {
//     int x = 10;
//     int* ptr = &x;
//     cout<<x<<endl;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
//     return 0;
// }

//Dynamic allocation
#include<iostream>
using namespace std;
    
int main() {
    //integer without name of variable
    //here memory allocate at run time
    //this will stored in heap memory
    int* ptr = new int(5423);
    // int* ptr = new int[10]; //to create an array of size 10
    cout<<*ptr<<endl;
    delete ptr;
    return 0;
}