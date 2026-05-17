// '+' operator

#include<iostream>
#include<string>
using namespace std;
    
int main() {
    string s = "Raghav";

    // cout<<s<<endl;
    // s.append("garg");
    // cout<<s<<endl;

    //OR
    // cout<<s<<endl;
    // s = s + "garg";
    // cout<<s<<endl;

    //Also
    cout<<s<<endl;
    s = "garg" + s;
    cout<<s<<endl;

    return 0;
}