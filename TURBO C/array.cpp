#include<iostream>
#include<string>
using namespace std;
    
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int s = sizeof(arr) / 4;
    for(int i=0; i<s; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}