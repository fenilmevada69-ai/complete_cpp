#include<iostream>
#include<vector>
using namespace std;
    
int main() {
    vector<int> v = {1,2,3,4,5};
    for(int val : v) {
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<*v.begin()<<endl;//derefrencing 
    cout<<*v.end()-1<<endl;//derefrencing v.end() points to the last after which has the garbage value+
    cout<<*(v.end()-1)<<endl;


    //iterator it
    vector<int> vec = {1,2,3,4,5,6,7,8};
    // vector<int>::iterator it;
    // for(it=vec.begin(); it!=vec.end(); it++) {
    //     cout<<*it<<" ";
    // }
    // OR
    // for(vector<int>::iterator it=vec.begin(); it!=vec.end(); it++) {
    //     cout<<*(it)<<" ";
    // }
    //OR
    //in  modern c++ vector<int>::iterator it = auto
    // for(auto it=vec.rbegin(); it!=vec.rend(); it++) {
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl; //using this iterator for loop we can able to access direct memory address
    return 0;
}