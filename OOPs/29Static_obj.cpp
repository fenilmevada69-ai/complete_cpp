// #include<iostream>
// using namespace std;

// class ABC{
// public:
//     ABC() {
//         cout<<"Constructor Calling"<<endl;
//     }
//     ~ABC() {
//         cout<<"Destructor Calling"<<endl;
//     }
// };
    
// int main() {
//     if(true) {
//         ABC obj;
//     }
//     cout<<"End of main function"<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;

class ABC{
public:
    ABC() {
        cout<<"Constructor Calling"<<endl;
    }
    ~ABC() {
        cout<<"Destructor Calling"<<endl;
    }
};
    
int main() {
    if(true) {
        static ABC obj;
    }
    cout<<"End of main function"<<endl;
    return 0;
}