//Special type of container --> pair
//no need of any type of include file 
#include<iostream>
#include<vector>
using namespace std;
    
int main() {
    pair<int, int> p = {1,5};
    //use to make a group of two values
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    pair<string, int> pa = {"Hellow World!",5};
    cout<<pa.first<<endl;
    cout<<pa.second<<endl;

    pair<int, pair<float, string>> p1 = {10,{9.2, "Hellow World!"}};
    cout<<p1.first<<endl;        
    cout<<p1.second.first<<endl;    
    cout<<p1.second.second<<endl;
    // p1.swap(p);


    //vector of pair
    vector<pair<int,char>> vec = {{1,'a'}, {2,'b'}, {3,'c'}};
    // for(int i=0; i<vec.size(); i++) {
    //     cout<<vec[i].first<<" "<<vec[i].second<<endl;
    // }
    //OR
    // for(pair<int, char> p : vec) {
    //     cout<<p.first<<" "<<p.second<<endl;
    // } 
    //OR
    // for(auto p : vec) {
    //     cout<<p.first<<" "<<p.second<<"\t";
    // }
    vec.push_back({4,'d'});
    cout<<endl;
    for(auto p : vec) {
        cout<<p.first<<" "<<p.second<<"\t";
    }
    cout<<endl;
    vec.push_back({5,'d'});     //(more used)
    vec.emplace_back(5,'d');    //in-place objects create (but emplace back is faster than push_back)
    vec.push_back(make_pair(8,'d'));
    for(auto p : vec) {
        cout<<p.first<<" "<<p.second<<"\t";
    }
    cout<<endl;
    return 0;
}