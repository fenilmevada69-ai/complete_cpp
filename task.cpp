#include<iostream>
#include<sstream>
#include<map>
using namespace std;

int main() {
    ostringstream ss;
    ss << 10 << " " << 20;

    string result = ss.str();
    cout << result << endl;
    return 0;
}