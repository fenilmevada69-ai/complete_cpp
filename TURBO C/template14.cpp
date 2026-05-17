// #include<iostream>
// #include<string>
// using namespace std;

// template <typename temp>
// temp add(temp a, temp b) {
//     return a + b;
// }

// int main() {
//     cout << add(1,2) << endl;

//     string fname = "Fenil";
//     string lname = "Mevada";
//     cout << add(fname, lname) << endl;

//     cout << add(true, true) << endl;

//     auto sum = add(2,3);
//     cout << sum << endl;
//     return 0;
// }



#include<iostream>
#include<string>
using namespace std;
template <typename temp>
temp maxi(temp a, temp b) {
    if(a>b) return a;
    else return b;
}
int main() {
    string x = "a";
    string y = "b";
    cout << maxi(2,3) << endl;
    cout << maxi(2.3, 1.3) << endl;
    cout << maxi(y,x) << endl;
    return 0;
}