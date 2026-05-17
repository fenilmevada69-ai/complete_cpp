#include<iostream>
using namespace std;

class Shop{
    private:
        int itemId[100];
        int itemPrice[100];
        int counter;
    public:
        void initCount();
        void setDeatail();
        void getDetail();
};
void Shop:: initCount() {
    counter=0;
}
void Shop:: getDetail() {
    for(int i=0; i<counter; i++) {
        cout<<"The price of item with ID "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}
void Shop:: setDeatail() {
    cout<<"Enter id of your item "<<counter+1<<" ";
    cin>>itemId[counter];
    cout<<"Enter price of your item ";
    cin>>itemPrice[counter];
    counter++;
}
int main() {
    Shop s1;
    s1.initCount();
    s1.setDeatail();
    s1.setDeatail();
    s1.setDeatail();
    s1.getDetail();
    return 0;
}