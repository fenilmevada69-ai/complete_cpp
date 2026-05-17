// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
    
// int main() {
    // vector<int> v = {1,2,2,2,3,4,5,6,8};
    // int i = count(v.begin(), v.end(), 2);
//     cout << "v: " << i << endl;
    
//     vector<string> vec = {"a", "b", "c", "d", "e"};
//     int j = count(vec.begin(), vec.end(), "a");
//     cout << "vec: " << j << endl;
//     return 0;
// }



//count_if
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    
int main() {
    vector<int> v = {1,2,2,2,3,4,5,6,8};
    int even = count_if(v.begin(), v.end(), [](int x) {
        return x%2==0;
    });
    cout << "Even numbers are: " << even << endl;

    string str = "malayalam";
    int vowels = count_if(str.begin(), str.end(), [](char ch) {
        int vowels = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ? 1 : 0);
        return vowels;
    });
    cout << "Vowels are: " << vowels << endl;
    return 0;
}






// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
    
// int main() {
//     vector<int> v = {1,2,2,2,3,4,5,6,8};
//     int i = count(v.begin(), v.end(), 2);
//     cout << "v: " << i << endl;
    
//     vector<string> vec = {"a", "b", "c", "d", "e"};
//     int j = count(vec.begin(), vec.end(), "a");
//     cout << "vec: " << j << endl;
//     return 0;
// }