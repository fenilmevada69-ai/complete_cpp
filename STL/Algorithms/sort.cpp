//reverse and sort

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main() {
//     vector<string> v = {"ram", "amit", "sumit", "ziya", "neha"};
//     sort(v.begin(), v.end());
//     for(auto val : v) {
//         cout << val << " ";
//     }
//     cout<<endl;
//     int arr[] = {1,20,3,40,5,61,7};
//     sort(arr,arr+7,greater<int>());
//     for(auto val : arr) {
//         cout << val << " ";
//     }
//     cout<<endl;
//     return 0;
// }




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<string> v = {"ram", "amit", "sumit", "ziya", "neha"};
    // sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(auto val : v) {
        cout << val << " ";
    }
    cout<<endl;
    int arr[] = {1,20,3,40,5,61,7};
    reverse(arr,arr+7);
    for(auto val : arr) {
        cout << val << " ";
    }
    cout<<endl;

    return 0;
}