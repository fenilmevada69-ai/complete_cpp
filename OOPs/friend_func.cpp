// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
// #include<cmath>
// using namespace std;
    
// class Chai{
// private:
//     string teaName;
//     int servings;

// public: 
//     Chai(string name, int servings) : teaName(name), servings(servings) {}

//     void setServings(int servings) {
//         this->servings = servings;
//     }

//     int getServings() {
//         return this->servings;
//     }

//     void getInfo() const{
//         cout<<"Tea Name "<<this->teaName<<endl; 
//         cout<<"Quantity "<<this->servings<<endl;
//     }
// };

// int main() {
//     Chai masalaChai("Masala Chai", 4);
//     Chai gingerChai("Ginger Chai", 8);

//     if(masalaChai.getServings()>gingerChai.getServings()) {
//         cout<<"Masala chai is having more servings than Ginger chai"<<endl;
//     }else {
//         cout<<"Ginger chai is having more servings than Masala chai"<<endl;
//     }

//     masalaChai.getInfo();
//     gingerChai.getInfo();
//     return 0;
// }



#include<iostream>
using namespace std;

class Chai{
private:
    string teaName;
    int servings;
public:
    Chai(string teaName, int servings) : teaName(teaName), servings(servings) {
    }

    void getInfo() const{
        cout<<"Tea Name : "<<this->teaName<<endl;
        cout<<"Quantity : "<<this->servings<<endl;
    }

    friend bool compareServings(const Chai&, const Chai&);
};

bool compareServings(const Chai& c1, const Chai& c2) {
    return c1.servings > c2.servings;
}

int main() {
    Chai c1("Masala Tea",14);
    Chai c2("Ginger Tea",8);

    c1.getInfo();
    c2.getInfo();
    
    if(compareServings(c1,c2)) cout<<"c1 has more servings"<<endl; 
    else cout<<"c2 has more servings"<<endl;
    return 0;
}