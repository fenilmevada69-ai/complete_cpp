#include<iostream>
using namespace std;
    
class Vector{
    public:
        int size;
        int capacity;
        int* arr;

        Vector() {
            size = 0;
            capacity = 1;
            arr = new int[1];
        }

        void push_back(int ele) {
            if(this->capacity == this->size) {
                this->capacity *= 2; 
                // arr = new int[capacity];
                int* arr2 = new int[capacity];
                for(int i=0; i<size; i++) {
                    arr2[i] = arr[i];
                }
                delete[] arr;
                arr = arr2;
            }
            arr[size++] = ele;
        }

        void pop_back() {
            if(size == 0) cout << "Array is empty" << endl;
            else this->size--;
        }

        void print(){ 
            for(int i=0; i<this->size; i++) {
                cout << this->arr[i] << endl;
            }
        }
        int get(int idx) {
            if(size == 0) {
                cout << "Vector is empty" << endl;
                return -1;
            }
            if(idx >= size || idx<0) {
                cout << "Invalid Index" << endl;
                return -1;
            }
            return this->arr[idx];           
        }
};

int main() {
    Vector v1{};
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    v1.push_back(60);
    v1.push_back(70);
    v1.push_back(80);
    v1.print();
    cout << v1.get(8) << endl;
    return 0;
}