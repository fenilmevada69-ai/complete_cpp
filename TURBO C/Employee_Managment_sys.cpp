#include<iostream>
#include<string>
using namespace std;

constexpr int SIZE = 100;
string emp_name[SIZE];
int emp_salary[SIZE];
int emp_id[SIZE];
int emp_count = 0;

void add() {
    if(emp_count < SIZE) {
        string name;
        cout << "Enter name: ";
        getline(cin,name);
        int salary;
        cout << "Enter salary: ";
        cin >> salary;
        int id;
        cout << "Enter id: ";
        cin >> id;
        emp_name[emp_count] = name;
        emp_salary[emp_count] = salary;
        emp_id[emp_count] = id;
        emp_count++;
    } else {
        cout << "Array is full!" << endl;
    }
}

void display() {
    if(emp_count == 0) {
        cout << "No employees found!" << endl;
    } else {
        for(int i=0; i<emp_count; i++) {
            cout << "=====Employee" << i+1 << "=====" << endl;
            cout << "Name: " << emp_name[i] << endl;
            cout << "ID: " << emp_id[i] << endl;
            cout << "Salary: " << emp_salary[i] << endl;
        }
    }
}

void update() {
    int id;
    bool flag = false;
    cout << "Enter id to update: ";
    cin >> id;
    for(int i=0; i<emp_count; i++) {
        if(id == emp_id[i]) {
            flag = true;
            string name;
            cout << "Enter name: ";
            getline(cin,name);
            int salary;
            cout << "Enter salary: ";
            cin >> salary;
            emp_name[i] = name;
            emp_salary[i] = salary;
            break;
        }
    } 
    if(!flag) {
        cout << "Employee not found!" << endl;
    }
}

void deleteEmp() {
    int id;
    bool flag = false;
    cout << "Enter id to delete: ";
    cin >> id;
    for(int i=0; i<emp_count; i++) {
        if(id == emp_id[i]) {
            flag = true;
            for(int j=i; j<emp_count-1; j++) {
                emp_name[j] = emp_name[j+1];
                emp_salary[j] = emp_salary[j+1];
                emp_id[j] = emp_id[j+1];
            }
            emp_count--;
            break;
        }
    }
    if(!flag) {
        cout << "Employee not found!" << endl;
    }
}

void search() {
    int id;
    bool flag = false;
    cout << "Enter id to search: ";
    cin >> id;
    for(int i=0; i<emp_count; i++) {
        if(id == emp_id[i]) {
            flag = true;
            cout << "=====Employee" << i+1 << "=====" << endl;
            cout << "Name: " << emp_name[i] << endl;
            cout << "ID: " << emp_id[i] << endl;
            cout << "Salary: " << emp_salary[i] << endl;
            break;
        }
    }
    if(!flag) {
        cout << "Employee not found!" << endl;
    }
}
    
int main() {
    int choice;
    do{
        cout << "1. add  employee" << endl;
        cout << "2. delete employee" << endl;
        cout << "3. update employee" << endl;
        cout << "4. search employee" << endl;
        cout << "5. display employee" << endl;
        cout << "6. exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        cin.ignore();
        switch(choice) {
            case 1 :
                add();
                cout << "New Employee added successfully!" << endl;
                break;
            case 2 :
                deleteEmp();
                cout << "Employee Deleted successfully!" << endl;
                break;
            case 3 : 
                update();
                cout << "Employee updated successfully!" << endl;
                break;
            case 4 :  
                search();
                break;
            case 5 :
                display();
                break;
            case 6 : 
                cout << "Exiting..." << endl;
                exit(0);
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    }while(choice != 6);
    return 0;
}