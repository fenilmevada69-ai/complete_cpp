#include<iostream>
#include<string>
using namespace std;
//composite  --> min 1 factors except 1 & n.
int main() {
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int f;
    bool flag = false;
    for(int i=2; i<=n/2; i++) {
        if(n%i==0) {
            cout<<"Composite"<<endl;
            break;
        }
    }//OR
    // for(int i=n/2; i>=2; i--) {
    //     if(n%i==0) {
    //         cout<<"Composite"<<endl;
    //         break;
    //     }
    // }
    return 0;
}