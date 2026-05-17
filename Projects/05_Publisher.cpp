#include<iostream>
using namespace std;

class Publication {
    protected:
        float price;
    public:
        void getData() {
            cout << "Enter price: "; 
            cin >> price;
        }
        void putData() {
            cout << "Price: " << price << endl;
        }
};

class Book : public Publication {
    private:
        int pageCount;  
    public:
        void getData() {
            Publication::getData();
            cout << "Enter page count: "; 
            cin >> pageCount;
        }
        void putData() {
            Publication::putData();
            cout << "Page count: " << pageCount << endl;
        }
};

class TAPE : public Publication {
    private:
        float time;  
    public:
        void getData() {
            Publication::getData();
            cout << "Enter time in minutes: "; 
            cin >> time;
        }
        void putData() {
            Publication::putData();
            cout << "Time: " << time << endl;
        }
};
    
int main() {
    Book b;
    TAPE t;
    int op;
    cout << "1.Book Information" << endl;
    cout << "2.TAPE Information" << endl;
    cout << "Enter your choice: ";
    cin >> op;
    switch (op) {
        case 1 : {
            b.getData();
            b.putData();
            break;
        }
        case 2 : {
            t.getData();
            t.putData();
            break;
        }
        default : {
            cout << "Invalid choice" << endl;
        }
    }
    b.getData();
    t.getData();
    return 0;
}