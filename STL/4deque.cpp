#include<iostream>
#include<deque>
using namespace std;
    
int main() {
    //very similar to lists
    deque<int> d = {1,2,3,4,5}; 
    for(int val : d) {
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<d[2]<<endl;   //this random acces is not possible in lists
    return 0;
}