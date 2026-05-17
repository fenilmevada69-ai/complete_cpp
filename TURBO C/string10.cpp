//to_string function

// #include<iostream>
// #include<string>
// using namespace std;
    
// int main() {
//     int x = 12344;
//     string s = to_string(x);
//     cout<<s<<endl;
//     return 0;
// }

//Proof
// #include<iostream>
// #include<string>
// using namespace std;
    
// int main() {
//     int x = 12344;
//     string s = to_string(x);
//     s += "raghav";
//     cout<<s<<endl;
//     return 0;
// }

//USE of to_string
//Return number of digits without using loop
#include<iostream>
#include<string>
using namespace std;
    
int main() {
    int x = 12345;
    string s = to_string(x);  
    cout<<s.length()<<endl;
    return 0;
}