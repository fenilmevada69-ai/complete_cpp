#include<iostream>
using namespace std;

class GFG {
private: 
    int private_variable;

protected:
    int protected_variable;

public:
    GFG() {
        private_variable = 10;
        protected_variable = 99;
    }

    friend class F;
};

class F{
public:
    void display(GFG& t) {
        cout<<"The value of private variables: "<<t.private_variable<<endl;
        cout<<"The value of protected variables: "<<t.protected_variable<<endl;
    }
};

int main() {
    GFG g1;
    GFG g2;
    F fri;
    fri.display(g1);
    fri.display(g2);
    return 0;
}







// #include<iostream>
// using namespace std;

// class GFGs{
// private:
//     int private_var;

// protected:
//     int protected_var;

// public:
//     GFGs() {
//         private_var = 10;
//         protected_var = 10;        
//     }    

//     friend class F;
// };

// class F{
// public:
//     void display(GFGs& g) {
//         cout<<"Private variable is "<<g.private_var<<endl;
//         cout<<"Protected variable is "<<g.protected_var<<endl;
//     }
// };

// int main() {
//     GFGs g1;
//     F f1;
//     f1.display(g1);
//     f1.display(g1);
//     return 0;
// }




#include<iostream>
using namespace std;

class Tea{
    public:
        string name;
        int servings;
    Tea(string name, int servings) {
        this->name = name;
        this->servings = servings;
    }
    void printDetails() {
        cout<<"Tea : "<<this->name<<endl;
        cout<<"Servings: "<<this->servings<<endl;
    }
};
    
int main() {
    Tea t1("Masala Tea", 10);
    Tea t2("Ginger Tea", 14);
    t1.printDetails();
    t2.printDetails();

    return 0;
}