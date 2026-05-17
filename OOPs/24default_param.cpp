// #include<iostream>
// using namespace std;

// //it is known as default parameter
// void call(int x = 30) {
//     cout<<x<<endl;
// }

// int main() {
//     call();
//     return 0;
// }

#include<iostream>
using namespace std;

void call(string s = "Black Tea") {
    cout<<s<<endl;
}

int main() {
    call();
    return 0;
}