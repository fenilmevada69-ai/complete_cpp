//time complexity of map is O(log n)

//insert, emplace 
//count
//erase
//find
//size, empty


#include<iostream>
#include<map>
#include<string>
using namespace std;
    
void print(map<string, int> m){
    //this will print according to sorted order of keys
    cout << "-----------" << endl;
    for(auto p : m) {
        cout << p.first << " " << p.second << endl;
    }
    cout << "-----------" << endl;
}

int main() {
    //<key, value>
    //key must be unique
    //value can be duplicate
    
    map<string, int> m;
    m["TV"] = 20;
    m["laptop"] = 40;
    m["headphones"] = 60;
    m["mouse"] = 30; 

    print(m);
    
    m["mouse"] = 99;
    print(m);
    
    m.insert({"camera", 100});
    print(m);

    m.emplace("keyboard", 10);
    print(m);

    cout << m.count("laptop") << endl;
    cout << m["laptop"] << endl;
  
    if(m.find("mouse") != m.end()) cout << "Found\n";
    else cout << "Not Found\n";


    if(m.find("speaker") != m.end()) cout << "Found\n";
    else cout << "Not Found\n";

    cout << m.empty() << endl;
    cout << m.size() << endl;
    return 0;
}












// #include<iostream>
// #include<map>
// using namespace std;

// void print(map<string,int> p) {
//     for(auto val : p) {
//         cout << val.first << " " << val.second << endl;
//     }
// } 
    
// int main() {
//     map<string,int> m;
//     m["tv"] = 50;
//     m["laptop"] = 100;
//     m["mouse"] = 20;
//     m["keyboard"] = 30;
//     m["tablets"] = 130;
//     m["watches"] = 120;
//     // for(auto p : m) {
//     //     cout << p.first << " " << p.second << endl;
//     // }
//     m.insert({"camera", 100});
//     m.emplace("camera", 100);
//     cout  << "Count = " << m.count("camera") << endl;
//     cout << m["laptop"] << endl;
//     m.clear();
//     print(m);
//     return 0;
// }



#include<iostream>
#include<map>
using namespace std;

void print(map<string, int> m) {
    for(auto p : m) {
        cout << p.first << " " << p.second << endl;
    }
}
    
int main() {
    map<string, int> m;
    m.insert({"tv",50});
    m.insert({"laptop",100});
    m.insert({"camera",10});
    m.insert({"mouse",25});
    m.insert({"keybord",250});
    m.erase("mouse");
    print(m);
    cout << m.find("mouse")->first << m.find("mouse")->second << endl;
    return 0;
}











// #include<iostream>
// #include<map>

// using namespace std;
    
// int main() {
//     int choice;
//     map<int, int> m;
//     while(true) {
        
//         cout << "1.Continue" << endl << "0.Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;
//         if(choice == 0) {
//             cout << "Exiting..." << endl;
//             break;
//         }
//         else if(choice == 1) {
//             int roll;
//             int marks;
//             cout << "Enter roll no: ";
//             cin >> roll;
//             cout << "Enter marks: ";
//             cin >> marks;
//             m.insert({{roll, marks}});
//         }

//     }

//     if(m.size() == 0) {
//         cout << "No data found" << endl;
//     }
//     else {
//         cout << "Displaying the map" << endl;
//         cout << "Key\tValue" << endl; 
//         for(auto pair : m) {
//             cout << pair.first << "\t" << pair.second << endl;
//         }
//     }
//     return 0;
// }
