#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>
    
int main() {
    int a = 10;
    int b = 5;
    //min / max
    cout << "min = " << min(a,b) << endl;  
    cout << "max = " << max(a,b) << endl;

    //swap
    swap(a,b);
    cout << "a = " << a << endl;

    string s = "abc";
    next_permutation(s.begin(), s.end());
    cout << s << endl;
    prev_permutation(s.begin(), s.end());
    cout << s << endl;

    //searching
    vector<int> v = {1,2,3,4,5,6};
    cout << binary_search(v.begin(), v.end(), 4) << endl;  //1
    cout << binary_search(v.begin(), v.end(), 10) << endl; //0


    int n1 = 15;
    long int n2 = 15;
    long long int n3 = 15;
    cout << __builtin_popcount(n1) << endl;
    cout << __builtin_popcountl(n2) << endl;
    cout << __builtin_popcountll(n3) << endl;

    //Min / max element
    string s = "abcdebfz";
    cout << *min_element(s.begin(), s.end()) << endl;
    cout << *max_element(s.begin(), s.end()) << endl;
    return 0;
}