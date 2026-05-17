#include<iostream>
#include<vector>
using namespace std;

class Chai {
public:
    string members;
    string teaName;
    int servings;
    vector<string> ingredients;

    void displayChaiDetails() {
        cout<<"Tea Name"<<this->teaName<<endl;
        cout<<"Servings: "<<this->servings<<endl;
        for(string ingredients : ingredients) {
            cout<<ingredients<<endl;
        }
    }
};
    
int main() {
    Chai chaione;
    chaione.teaName = "Lemon Tea";
    chaione.ingredients =  {"Lemon", "Sugar", "Water", "tea"};
    chaione.servings = 2;
    chaione.displayChaiDetails();
    return 0;
}