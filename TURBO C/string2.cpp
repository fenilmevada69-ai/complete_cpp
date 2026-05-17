//So use getline to solve problem of taking string as input.
#include<iostream>
#include<string>
using namespace std;
    
int main() {
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    cout<<"Your string is "<<s;
    return 0;
}