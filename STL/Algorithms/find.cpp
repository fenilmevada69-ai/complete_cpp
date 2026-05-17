#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
    
int main() {
    vector<int> v = {100,20,34,56,78,120,1,24,54};
    auto i = find(v.begin(), v.end(),34);
    if(i!=v.end())  {
        cout << "Element found" << *i << " at " << distance(v.begin(), i) << endl;
        cout << "Element found" << *i << " at " << (i-v.begin()) << endl;
    }
    else {
        cout << "Element not found";
    }
    return 0;
}

//also applies in strings. lists...





//find_if
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
    
// int main() {
//     vector<int> v = {9,8,6,1,5,8,2,7,3,4};
//     auto i = find_if(v.begin(), v.end(), [](int x) {
//         return x%2==0;
//     });
//     cout << *i << endl;
//     return 0;
// }

//if u want 2nd even number
//method 1
// int count = 0;
// auto it = find_if(v.begin(), v.end(), [&](int x) {
//     if (x % 2 == 0) {
//         count++;
//         return count == 2;
//     }
//     return false;
// });


//method 2
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main() {
//     vector<int> v = {9, 6, 1, 5, 8, 2, 7};
//     // first even
//     auto it1 = find_if(v.begin(), v.end(), [](int x) {
//         return x % 2 == 0;
//     });
//     // second even
//     auto it2 = find_if(it1 + 1, v.end(), [](int x) {
//         return x % 2 == 0;
//     });
//     if (it2 != v.end()) {
//         cout << "Second even element: " << *it2 << endl;
//         cout << "Index: " << it2 - v.begin() << endl;
//     }
//     return 0;
// }