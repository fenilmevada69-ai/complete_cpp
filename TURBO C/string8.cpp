//Input a string of even length and reverse the first half of the string

// #include<iostream>
// #include<string>
// using namespace std;
    
// int main() {
//     string s = "raghav";
//     int n = s.length();
//     cout<<s<<endl;
//     int i=0;
//     int j = n/2 - 1;
//     while(i<j) {
//         char temp = s[i];
//         s[i] = s[j];
//         s[j] = temp;
//         i++, j--;
//     }
//     cout<<s<<endl;
//     return 0;
// }

//builtin function 
#include<iostream>
#include<algorithm>
using namespace std;
    
int main() {
    string s = "raghav";
    int n = s.length();
    cout<<s<<endl;
    reverse(s.begin(), s.begin()+n/2);
    cout<<s<<endl;
    return 0;
}