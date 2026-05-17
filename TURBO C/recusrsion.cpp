#include<iostream>
using namespace std;

int money(int n) {
    if(n == 1) return 1;
    else return money(n-1)*2;
}
    
int main() {
    int days;
    cout << "Enter number of days: ";
    cin >> days;
    int m = money(days);
    cout << "Money: " << m << endl;
    return 0;
}