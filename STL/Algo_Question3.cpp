#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;

class Product1{


    public:
    int id;
    string name;
    int price;
    float dis;
    Product1(){};

    Product1(int id,string name,int price,float dis){
        this->id = id;
        this->name = name;
        this->price = price;
        this->dis = dis;
    }


};

int main(){

    vector<Product1> p1;
    p1.push_back(Product1(101,"iphone",45000,10));
    p1.push_back(Product1(102,"charger",5000,5));
    p1.push_back(Product1(103,"cabel",5000,0));

    vector<Product1> p2;
    p2.push_back(Product1(1001,"iphone16",75000,10));
    p2.push_back(Product1(1002,"charger bot",7000,5));
    p2.push_back(Product1(1003,"cabel-c",4000,0));

    map<string,vector<Product1>> products;
    products["Harshil"]=p1;
    products["Jay"]=p2;

    for(auto i :products){
        cout<<"\n"<<i.first<<"  ";
        //i.second -Vector -->loop
        for(auto p :i.second){
            cout<<p.id<<"--"<<p.name;
        }
        cout<<"\n";
    }
}