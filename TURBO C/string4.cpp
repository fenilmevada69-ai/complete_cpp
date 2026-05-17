// #include<iostream>
// #include<string>
// using namespace std;
    
// int main() {
//     string s = "Hello ";
//     cout<<s.length()<<endl; 
//     cout<<s.size()<<endl; 
// }

#include<iostream>
#include<string>
using namespace std;
    
int main() {
    string s = "Pw is the best platform to learn";
    int n = s.length();
    for(int i=0; i<n; i++) {
        cout<<s[i];
    }
    return 0;
}