// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main() {
//     string s = "programme";
//     cout << *min_element(s.begin(), s.end()) << endl;
//     cout << *max_element(s.begin(), s.end()) << endl;
//     return 0;
// }





// #include<iostream>
// #include<vector>
// #include<string>
// #include<algorithm>
// #include<numeric>

// using namespace std;
// //sort()
// int main(){

//     vector<int> v={100,20,34,56,78,120,1,24,54};
//     //sum
//     int sum = accumulate(v.begin(),v.end(),0);
//     cout<<"\n sum of v="<<sum;
//     //sum of array
//     vector<int> v1={1,2,3,4,5};

//     int prod = accumulate(v1.begin(),v1.end(),1,[](int a,int b){
//         return a * b;
//     });
//     cout<<"\n prod"<<prod;

//     vector<string> v3={"hi","hello","ok"};
//     int all = accumulate(v3.begin(),v3.end(),0,[](int s1,string str){
//         return s1 + str.length();
//     });
//     cout<<"\n all "<<all
// }






// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<numeric>
// using namespace std;
    
// int main() {
//     vector<int> v = {10,20,30,40,50};
//     // remove(v.begin(), v.end(), 3);
//     auto new_end = remove(v.begin(), v.end(), 30); // Changed 3 to 30 to match an element    
//     v.erase(new_end, v.end());
//     for (int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     return 0;
// }











#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

struct City {
    string name;
    int distance;
};

int main() {
    vector<City> cities = {
        {"Ahmedabad", 0},
        {"Surat", 265},
        {"Vadodara", 110},
        {"Rajkot", 215},
        {"Bhavnagar", 170}
    };

    sort(cities.begin(), cities.end(),[](const City& a, const City& b) {
         return a.distance < b.distance;
    });

    string name;
    cout << "Search Name: ";
    cin >> name;

    for (const auto& city : cities) {
        cout << city.name << " - " << city.distance << " km" << endl;
    }

    auto ptr = find_if(cities.begin(), cities.end(),[&](const City& c) {
         return c.name == name; 
    });



    return 0;
}
