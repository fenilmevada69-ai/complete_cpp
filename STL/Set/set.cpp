//time complexity of set is O(log n)
//insert, emplace
//count
//erase
//find
//size, empty, erase 

#include<iostream>
#include<set>
using namespace std;

//set of only unique values in sorted order
//set is type of circle

void print(set<int> s) {
    cout << "----------" << endl;
    for(auto val : s) {
        cout << val << endl;
    }
    cout << "----------" << endl;
}

int main() {
    set<int> s; 
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    cout << "Size: " << s.size() << endl;
    s.insert(5);
    s.insert(6);
    s.insert(5);
    s.insert(6);
    cout << "Size: " << s.size() << endl;
    print(s);

    cout << "lower bound: " << *(s.lower_bound(4)) << endl; //lower bound returns iterator of first element greater than or equal to the given value else it returns s.end()
    cout << "upper bound: " << *(s.upper_bound(4)) << endl; //lower bound returns iterator of first element greater than or equal to the given value else it returns s.end()
    cout << "lower bound: " << *(s.lower_bound(7)) << endl; //lower bound returns iterator of first element greater than or equal to the given value else it returns s.end()
    s.insert(10);
    s.erase(10);
    cout << "lower bound: " << *(s.lower_bound(7)) << endl; //lower bound returns iterator of first element greater than or equal to the given value else it returns s.end()
    cout << "upper bound: " << *(s.upper_bound(7)) << endl; //lower bound returns iterator of first element greater than or equal to the given value else it returns s.end()
    
    //lower bound --> should not be less than key
    //upper bound --> should be greater than key
    //example(set of chars) -->     a   a   b   b   b   c   c   d
    //index                         0   1   2   3   4   5   6   7    
    //lower bound('b') -->                  ^          
    //upper bound('b') -->                              ^          
    return 0;
}