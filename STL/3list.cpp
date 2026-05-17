#include<iostream>
#include<vector>
#include<list>
using namespace std;
    
int main() {
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_front(-1);
    l.push_front(-10);
    l.pop_back();
    l.pop_front();
    for(int val : l) {
        cout<<val<<" ";
    }
    cout<<endl;


    //initialising lists
    list<int> li = {1,2,3,4,5,6,7};
    for(int val : li) {
        cout<<val<<" ";
    }
    cout<<endl;
    li.remove(3);
    for(int val : li) {
        cout<<val<<" ";
    }
    return 0;
}