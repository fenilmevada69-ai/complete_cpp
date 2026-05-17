#include<iostream>
#include<numeric>
#include<algorithm>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<vector>
#include<deque>
#include<list>
using namespace std;

struct Employee{
    int id;
    string name;
    int salary;
};

void displayEmployee(const Employee& e) {
    cout << e.name << "\t" << e.id << "\t" << e.salary <<endl;
}
    
int main() {
    vector<Employee> vec;
    vec.push_back({101, "Rahul", 90000});
    vec.push_back({111, "Fenil", 100000});
    vec.push_back({102, "Ankit", 70000});
    vec.push_back({103, "Ankur", 50000});
    vec.push_back({104, "Rajat", 30000});
    vec.push_back({105, "Karan", 20000});

    // for(const Employee& it : vec) {
    //     displayEmployee(it);
    // }

    for_each(vec.begin(), vec.end(), displayEmployee);

    vector<Employee> higherEarners;
    // for(int i=0; i<vec.size(); i++) {
    //     if(vec[i].salary > 50000) {
    //         higherEarners.push_back(vec[i]);
    //     }
    // }
    // for(const Employee& e : vec) {
    //     if(e.salary > 50000) {
    //         higherEarners.push_back(e);
    //     }
    // }
    // vector<Employee>::iterator it;
    // for(it = vec.begin(); it!=vec.end(); it++){ 
    //     if(it->salary > 50000) {
    //         higherEarners.push_back(*it);
    //     }
    // }

    copy_if(vec.begin(), vec.end(), back_inserter(higherEarners), [](const Employee& e) {
        return e.salary > 50000;
    }); //backinserter inserts from back in highEarner container if conditions are satisfied!  

    double total = accumulate(vec.begin(), vec.end(),0, [](double s, const Employee& e){
        return (s + e.salary);
    });

    double avg = total/vec.size();
    cout << "Total Salary: " << total <<endl;
    cout << "Average Salary: " << avg <<endl;

    auto highestPaid = max_element(vec.begin(), vec.end(), [](auto e1, auto e2) {
        return e1.salary < e2.salary;
    });
    cout << "Highest Paid Employee: " << highestPaid->name <<endl;

    return 0;
}