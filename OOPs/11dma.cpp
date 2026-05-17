#include<iostream>
using namespace std;

class Cricketer{

public:
    string name;
    int runs;
    float avg;

    Cricketer(string name, int runs, float avg) {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

};
    
int main() {
    // int x1 = 10;
    // int* x2 = new int(10);

    Cricketer c1("Virat Kohli", 25000, 55.7);
    Cricketer* c2 = new Cricketer("Rohit Sharma", 18000, 47.5);
    
    // cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
    // cout<<(*c2).name<<" "<<(*c2).runs<<" "<<(*c2).avg<<endl;

    cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
    cout<<c2->name<<" "<<c2->runs<<" "<<c2->avg<<endl;


    //Why we use dma??
    //1 ---> we can access values by pointers
    //2 ---> for pass by reference(main use is in link lists)


    return 0;
}












// #include<iostream>
// using namespace std;

// class Book{
// public:
//     string title;
//     string author;

//     Book(string title, string author) {
//         this->title = title;
//         this->author = author;
//     }
//     void print() {
//         cout<<"Name: "<<this->title<<endl<<"Author: "<<this->author<<endl;
//     }
// };

// int main() {
//     Book b1("Harry Potter", "JK Rowling");
//     b1.print();

//     Book* ptr = new Book("Lord of the Rings", "Tolkien");
//     ptr->print();
//     return 0;
// }



// #include<iostream>
// using namespace std;

// class Book{
// public:
//     string title;
//     string author;

//     Book() {

//     }
//     Book(string title, string author) {
//         this->title = title;
//         this->author = author;
//     }
//     void print() {
//         cout<<"Name: "<<this->title<<endl<<"Author: "<<this->author<<endl;
//     }
// };

// int main() {
//     Book b1("Harry Potter", "JK Rowling");
//     b1.print();

//     Book* ptr = new Book;
//     ptr->author = "Tolkien";
//     ptr->title = "Lord of the Rings";
//     ptr->print();
//     return 0;
// }