//time complexity of multimap is O(log n)

#include<iostream>
#include<map>
using namespace std;

void print(multimap<string,int> m){
    cout << "-------" << endl;
    for(auto p : m) cout << p.first << " " << p.second << endl;
    cout << "-------" << endl;
}

void print(map<string,int> m){
    cout << "-------" << endl;
    for(auto p : m) cout << p.first << " " << p.second << endl;
    cout << "-------" << endl;
}
    
int main() {
    //as it is multimap so it does not added using []
    map<string, int> m1;
    m1.emplace("tv", 20);
    m1.emplace("tv", 20);
    m1.emplace("tv", 20);
    m1.emplace("tv", 20);
    print(m1);



    //multimap
    //here square is not allowed only use emplace
    multimap<string, int> m;
    m.emplace("tv",20);
    m.emplace("tv",20);
    m.emplace("tv",20);
    m.emplace("tv",20);
    m.emplace("tv",20);
    m.emplace("tv",20);
    m.emplace("laptop",200);
    print(m);
    
    m.erase("tv");
    print(m);
    
    // to erase only one key push iterator in erase
    m.emplace("tv",20);
    m.emplace("tv",20);
    m.emplace("tv",20);
    m.emplace("tv",20);
    m.emplace("tv",20);
    m.emplace("tv",20);
    m.emplace("laptop",200);
    m.erase(m.find("tv"));
    print(m);
    return 0;
}