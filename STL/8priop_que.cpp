//time complexity of priority queue is O(log n)

//push, empty
//top
//pop
//size

#include<iostream>
#include<queue>
using namespace std;
    
int main() {
    priority_queue<int> p;
    p.push(10);
    p.push(4);
    p.push(20);
    p.push(90);
    p.push(1);
    //by default it sets in sorted order 
    while(!p.empty()) {
        cout << p.top() << endl;
        p.pop();
    }
    //to set in descending order
    //greater<int> is a functor
    priority_queue<int, vector<int>, greater<int>> q1;
    q1.push(10); 
    q1.push(20); 
    q1.push(30); 
    q1.push(3); 
    q1.push(1); 
    q1.push(99); 
    while(!q1.empty()) {
        cout << q1.top() << endl;
        q1.pop();
    }
    return 0;
}