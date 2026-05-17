//Wrong method
// #include<iostream>
// #include<string>
// using namespace std;
    
// void swap(char a[], char b[], int i, int j) {
//     char temp = a[i];
//     a[i] = b[j];
//     b[j] = temp;
// }

// int main() {
//     string s = "raghav";
//     cout<<s<<endl;
//     int i=0, j = s.length()-1; 
//     while(i<j) {
//         swap(s[i],s[j]);
//         i++, j--;
//     }
//     cout<<s<<endl;
//     return 0;
// }

//AI version(1)
// #include<iostream>
// #include<string>
// using namespace std;
    
// void swap(char* a, char* b) {
//     char temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     string s = "raghav";
//     cout<<s<<endl;
//     int i=0, j = s.length()-1; 
//     while(i<j) {
//         swap(&s[i],&s[j]);
//         i++, j--;
//     }
//     cout<<s<<endl;
//     return 0;
// }


//AI(2)
// #include<iostream>
// #include<string>
// using namespace std;
    
// void swap(char &a, char &b) {
//     char temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     string s = "raghav";
//     cout<<s<<endl;
//     int i=0, j = s.length()-1; 
//     while(i<j) {
//         swap(s[i],s[j]);
//         i++, j--;
//     }
//     cout<<s<<endl;
//     return 0;
// }

//Or

// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
//     string s = "raghav";
//     cout<<s<<endl;
//     int i=0, j = s.length()-1; 
//     while(i<j) {
//         char temp = s[i];
//         s[i] = s[j];
//         s[j] = temp;
//         i++, j--;
//     }
//     cout<<s<<endl;
//     return 0;
// }

//Using built in function
// #include<iostream>
// #include<algorithm>
// // using namespace std;
    
// int main() {
//     std::string s = "Raghav";
//     std::cout<<s<<"\n";
//     std::reverse(s.begin(), s.end());
//     std::cout<<s<<"\n";
//     return 0;
// }

#include<iostream>
#include<algorithm>
using namespace std;
    
int main() {
    string s = "Raghav";
    cout<<s<<endl;
    reverse(s.begin(), s.end());
    cout<<s<<endl;
    return 0;
}