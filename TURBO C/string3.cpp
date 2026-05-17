#include<iostream>
#include<string>
using namespace std;
    
int main() {
    string s = "Hello World";
    cout<<s<<endl;
    cout<<s[0]<<endl;
    cout<<s[5]<<endl;
    s[5] = 'Z';
    cout<<s<<endl;
    cout<<s[5]<<endl;
    return 0;
}