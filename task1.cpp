// #include<iostream>
// #include<unordered_map>
// #include<algorithm>
// #include<stack>
// #include<vector>
// #include<queue>
// using namespace std;

// int main() {
//     vector<int> a = {11,12,19,15};
//     vector<int> b = {10,20,40,30};
//     vector<int> result(a.size() + b.size());
//     //merge requires sorted arrays and does not change current size of result
//     merge(a.begin(), a.end(), b.begin(), b.end(), result.begin());
//     for(auto i : result) {
//         cout << i << " ";
//     }
//     return 0;
// }




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int> v) {
    for(auto i : v) {
        cout << i << " ";
    }
    cout << endl;
}
int main() {
    vector<int> v = {1,2,3,4,5,3,2,1,5,6,4};
    print(v);
    //first need to sort then unique
    sort(v.begin(), v.end());
    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end());
    print(v);
    return 0;
}









// #include<iostream>
// #include<list>
// #include<unordered_map>
// #include<algorithm>
// #include<stack>
// #include<vector>
// #include<queue>
// #include<set>
// using namespace std;

// int main() {
//     cout << "Search word from dictionary" << endl;
//     cout << "Dictionary" << endl;
//     cout << "app, appl, application, bat, ball, cat, catapult" << endl;
//     set<string> dic = {"app", "appl", "application", "bat", "ball", "cat", "catapult"};
//     string str;
//     cout << "Enter word: " << endl;
//     cin >> str;
//     auto it = dic.lower_bound(str);

//     cout << "=====" << endl;
//     while(it!=dic.end() && it->substr(0,str.size()) == str) {
//         cout << *it << endl;
//         it++;
//     }
//     return 0;
// }






//if you want to loop till n;
#include<iostream>
using namespace std;   
int main() {
    int n, x;
    cin >> n;
    int i=0;
    while(n--) {
        cout << "Enter: ";
        cin >> x;
        cout << "x is " << x << endl; 
    }
    return 0;
}