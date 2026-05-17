#include<iostream>
#include<stack>
using namespace std;
    
int main() {
    // stack<int> s; 
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // cout << s.top() << endl;

    // while(!s.empty()) {
    //     cout << s.top() << endl;
    //     s.pop();
    // } 


    stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.pop();   
    stack<int> s2;
    s2.swap(s1);
    cout << s2.size() << endl;
    cout << s1.size() << endl;
    return 0;
}