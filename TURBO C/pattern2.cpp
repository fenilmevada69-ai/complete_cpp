#include<iostream>
#include<string>
using namespace std;
    
int main() {
    int n;
    cout<<"Enter n : ";
    cin>>n;
    char ch = 'A';
    int a = 1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            if(i%2==0) {
                cout<<ch;
                ch++;
            }   
            else {
                cout<<a;
                a++;
            }
        }
        cout<<endl;
    }
    return 0;
}