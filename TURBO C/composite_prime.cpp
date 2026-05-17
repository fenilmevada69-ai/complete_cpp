#include<iostream>
#include<cmath>
#include<string>
using namespace std;
    
int main() {
    int n;
    cout<<"Enter n : ";
    cin>>n;
    bool flag = true;
    for(int i=2; pow(i,2)<=n; i++) {
        if(n%i==0) {
            flag = false;
            break;
        }
    }
    if(flag==true) cout<<"Prime"<<endl;
    else cout<<"Composite"<<endl;
    return 0;
}