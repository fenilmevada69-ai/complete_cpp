#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
//prints in sorted order
void print(unordered_set<int> s) {
    cout << "----------" << endl;
    for(auto val : s) {
        cout << val << endl;
    }
    cout << "----------" << endl;
}

int main() {
    unordered_set<int> s; 
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
    //here lower and uppers bound are not available due to unordered set
    return 0;
}