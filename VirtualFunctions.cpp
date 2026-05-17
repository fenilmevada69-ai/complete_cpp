#include<iostream>
using namespace std;

class Tea {
    public:
        virtual void prepareIngredients() = 0;
        virtual void brew() = 0;
        virtual void serve() = 0;
    
        void makeTea() {
            prepareIngredients();
            brew();
            serve();
        }
};
class MasalaTea : public Tea{ 
    public:
        void prepareIngredients() {
            cout<<"Prepare Masala Tea Ingredients"<<endl;
        }
        void brew() {
            cout<<"Brew Masala Tea"<<endl;
        }
        void serve() {
            cout<<"Serve Masala Tea"<<endl;
        }
};
class GingerTea : public Tea{ 
    public:
        void prepareIngredients() {
            cout<<"Prepare Ginger Tea Ingredients"<<endl;
        }
        void brew() {
            cout<<"Brew Ginger Tea"<<endl;
        }
        void serve() {
            cout<<"Serve Ginger Tea"<<endl;
        }
};
int main() {
    MasalaTea mt;
    GingerTea gt;
    mt.makeTea();  
    gt.makeTea();  
    return 0;
}