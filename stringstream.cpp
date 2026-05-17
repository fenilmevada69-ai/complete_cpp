#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<sstream>


// int main(int argc, char const *argv[])
// {
//     string s = "10 20";
//     stringstream ss(s);
//     int a, b;
//     ss >> a >> b;
//     cout << a << " " << b << endl;
//     return 0;
// }

    
// int main() {
//     stringstream ss;
//     ss << 10 << " " << 20;
//     string result = ss.str();
//     cout << result << endl;
//     //>> = reading from string
//     //<< = writing to string
//     return 0;
// }



int main(int argc, char const *argv[])
{
    string line = "Fenil 21";
    stringstream ss(line);
    string name;
    int age;
    ss >> name >> age;
    cout << "Name: " << name << ", Age: " << age << endl;
    return 0;
}




//map question!
// #include<iostream>
// #include<sstream>
// #include<map>
// using namespace std;

// int main() {
//     string sentence = "Fenil 21 Fenil3 Fenil 4d";
//     string word;
//     stringstream ss(sentence);
//     map<string, int> wordCount;
//     while(ss >> word) {
//         wordCount[word]++;
//     }

//     for(auto pair : wordCount) {
//         cout << pair.first << " " << pair.second << endl;
//     } 
//     return 0;
// }