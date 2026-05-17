//time complexity of unordered map is O(1)
#include<iostream>
#include<unordered_map>
using namespace std;

//normal map arranges data in sorted ordered of keys
//similarly this unordered map arranges data in random order
//undordered map is more used than normal map and multimap is less used than normal map  
//major diff between normal and unordered map is that unordered map is faster than normal map
//time complexity of unodered map is O(1)
//for unordered map lower and upper bound are not available
int main() {
    //here also values cant be duplicated 
    unordered_map<string, int> m;
    m.emplace("tv",20);
    m.emplace("latop",10);
    m.emplace("fridge",40);
    m.emplace("Camera",100);

    for(auto p : m) cout << p.first << " " << p.second << endl;
    return 0;
}