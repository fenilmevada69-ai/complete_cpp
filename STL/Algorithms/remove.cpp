#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
    
int main() {
    vector<int> v = {10,20,30,40,50};
    // remove(v.begin(), v.end(), 3);
    auto new_end = remove(v.begin(), v.end(), 30); // Changed 3 to 30 to match an element    
    v.erase(new_end, v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}
