//1.
// #include<iostream>
// using namespace std;
    
// int main() {
//     int n;
//     cout<<"Enter n"<<endl; // << is known as insertion operator
//     cin>>n; // >> is known as extraction operator
//     return 0;
// }

//2.
// #include<iostream>
// using namespace std;
// int c = 45;
// int main() {
//     int a,b;
//     cout<<"Enter a and b : ";
//     cin>>a>>b;
//     int c = a + b;
//     cout<<"Sum is "<<c<<endl;
//     cout<<"Global sum is "<<::c<<endl;
//     return 0;
// }

//3.
// #include<iostream>
// using namespace std;
// int main() {
//     float x = 5.5f;
//     // cout<<x<<endl;
//     cout<<sizeof(3.54)<<endl;   //by default it is taken as double 
//     cout<<sizeof(3.54f)<<endl;  //f = F
//     cout<<sizeof(3.54F)<<endl;  
//     cout<<sizeof(3.54l)<<endl;  //l = L
//     cout<<sizeof(3.54L)<<endl;
//     return 0;
// }

//4.
#include<iostream>
using namespace std;
    
int main() {
    float x = 4.5;
    int c = int(x);
    // OR (This feature is not in C)
    // int c = (int)x;
    cout<<c<<endl;
    return 0;
}

//5.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 10;
//     int &y = x;
//     y = 20;
//     cout << x << endl;
//     return 0;
// }