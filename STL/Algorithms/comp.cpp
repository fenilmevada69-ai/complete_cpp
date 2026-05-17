#include<iostream>
#include<map>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;

void print(vector<pair<int, int>> v) {
    for(auto val : v) {
        cout << val.first << "\t" << val.second << endl;
    }cout<<endl;
}

bool comparator(pair<int, int> p1, pair<int, int> p2) {
    if(p1.first > p2.first) return true;
    if(p1.first < p2.first) return false;

    if(p1.second > p2.second) return true;
    else return false;
}


int main() {
    vector<pair<int, int>> v;
    v.push_back({1,2});
    v.push_back({9,5});
    v.emplace_back(4,7);
    v.emplace_back(3,1);
    v.emplace_back(6,7);
    sort(v.begin(), v.end(), comparator);
    print(v);
    return 0;
}