//given an integer n, create an array containing squares of numbers from 1 to n.
#include<iostream>
#include<string>
using namespace std;
    
int main() {
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int a = 1;
    for(int i=1; i<=n; i++) {
        cout<<a*a<<" ";
        a++;
    }
    return 0;
}