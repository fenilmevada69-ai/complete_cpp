#include<iostream>
using namespace std;

int* func(int size) {
    int* ptr = new int[size];
    for(int i=0; i<size; i++) {
        ptr[i] = (i+1) * 10;
    }
    return ptr;
}
    
int main() {
    int size = 10;
    int* ptr = func(size);
    for(int i=0; i<size; i++) {
        cout<<ptr[i]<<"#"<<endl;
    }
    delete[] ptr;
    return 0;
}