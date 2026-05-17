#include<iostream>
#include<set>
using namespace std;
//prints in sorted order
void print(multiset<int> s) {
    cout << "----------" << endl;
    for(auto val : s) {
        cout << val << endl;
    }
    cout << "----------" << endl;
}

//this prints all the elements in the set

int main() {
    multiset<int> s; 
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
    cout << "lower bound: " << *(s.lower_bound(7)) << endl; //lower bound returns iterator of first element greater than or equal to the given value else it returns s.end()
    cout << "upper bound: " << *(s.upper_bound(7)) << endl; //lower bound returns iterator of first element greater than or equal to the given value else it returns s.end()    
    return 0;
}