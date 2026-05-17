#include<iostream>
#include<vector>
using namespace std;
    
int main() {
    //initial size of vector is 0
    vector<int> vec;

    //size and capacity
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    vec.pop_back();
    vec.emplace_back(19);  

    //loops 
    for(int val : vec) {
        cout<<val<<" ";
    }

    //to access to a particular index
    cout<<"\nValue at index 2 is : "<<vec.at(2)<<endl;
    cout<<"Value at index 2 is : "<<vec[2]<<endl;


    //front(to access the first element) and back(to access the last element)
    cout<<"First element is : "<<vec.front()<<endl;
    cout<<"Last element is : "<<vec.back()<<endl;


    //initialing vector with values(manually) 
    cout<<"\ninitialing vector with values(manually) \n";
    vector<int> vector1 = {1,2,3,4,5,6};
    for(int val : vector1) {
        cout<<val<<" ";
    }          
    cout<<endl;
    

    //using same value to fill the vector
    cout<<"\nusing same value to fill the vector"<<endl;
    vector<int> vector2(4,10);  //size = 4 and element = 10
    //this will not be used more but it is imp in dyanamic programming - tabulation DP[] vectors
    for(int val : vector2) {
        cout<<val<<" ";
    }
    cout<<"\n";


    //copying vector from vector
    cout<<"\ncopying vector from vector"<<endl;
    vector<int> vector3 = {10,20,30,40,50};
    vector<int> vector4(vector3);
    for(int val : vector4) {
        cout<<val<<" ";
    }
    cout<<"\n";


    //erase
    cout<<"\nErase function"<<endl;
    vector<int> vector5 = {1,2,3,4,5,6,7};
    // vector5.erase(vector5.begin());
    // vector5.erase(vector5.end()-1); //end() points to the last after element
    // vector5.erase(vector5.begin(),vector5.end()-1);
    // vector5.erase(vector5.begin(),vector5.begin()+3);
    for(int val : vector5) {
        cout<<val<<" ";
    }
    cout<<"\n";


    //insert    //to insert a element in vector
    cout<<"\nInsert functoin"<<endl;
    vector<int> vector6(5,99);
    vector6.insert(vector6.begin() + 2, 10);
    // vector6.insert(vector6.begin() + 2, {10,11,12});
    for(int val : vector6) cout<<val<<" ";
    cout<<endl;
    
    
    //clear //to clear a whole vector
    cout<<"\nClear function"<<endl;
    vector6.clear();
    for(int val : vector6) cout<<val<<" ";
    cout<<"Size of vector6 is : "<<vector6.size()<<endl;
    cout<<"Capacity of vector6 is : "<<vector6.capacity()<<endl;


    //empty function 
    cout<<"\nIs vector6 is empty : "<<vector6.empty()<<endl;
    cout << vector6.max_size() << endl;
    return 0;
}








#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v) 
{
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout<<endl;
}
    
int main() {
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    vector<int>::iterator it = v.begin();
    while(it!=v.end()) {
        if((*it)%2==0) v.erase(it);
        else it++;
    }
    print(v);
    return 2;
}