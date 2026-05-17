#include<iostream>
#include<string>
#include<vector>
using namespace std;

class User {
    private:
        string username,password;
    public:
        User(string name, string password) {
            this->username = username;
            this->password = password;
        }
        string getUserName() {
            return this->username;
        }
        string getPassword() {
            return this->password;
        }
};

class UserManager{
    private:
        vector<User> users;
    public:
        void registerUser() {
            string username , password;
            cout << "Enter username: "; 
            cin >> username;
            cout << "Enter password: "; 
            cin >> password;

            User newUser(username,password);
            users.push_back(newUser);
            cout << "USer Regiser Successfull" << endl;
        }

        bool LoginUser(string username, string password) {
            for(int i=0; i<users.size(); i++) {
                if(users[i].getUserName() == username && users[i].getUserName() == password) {
                    cout << "Login Succedfuly!" << endl;
                    return true;
                }
            }
            cout << "Invalid username" << endl;
            return false;
        }

        void showUserList() {
            if(users.size() == 0) {
                cout << "No user found" << endl;
                return;
            }
            cout << "=========List=========" << endl;
            for(int i=0; i<users.size(); i++) {
                cout << "Name: " << users[i].getUserName() << endl;
            }
        }

        void search(string username) {
            bool flag = false;
            for(int i=0; i<users.size(); i++) {
                if(users[i].getUserName() == username) {
                    flag = true;
                    cout << "Name: " << users[i].getUserName() << endl;
                    return;
                }
            }
            if(!flag) {
                cout << "User not found" << endl;
            }
        }

        void deleteUser(string username) {
            bool flag = false;
            for(int i=0; i<users.size(); i++) {
                if(users[i].getUserName() == username) {
                    users.erase(users.begin()+i);
                    flag = true;
                    cout << users[i].getUserName() << " deleted" << endl;
                    return;
                }
            }
            if(!flag) {
                cout << "User not found" << endl;
            }
        }
};
    
int main() {
    UserManager usermanage;
    int op;
    int choice;
    do{

        cout << "1. Register User: " << endl;
        cout << "2. Login" << endl;
        cout << "3. Show User List" << endl;
        cout << "4. Search User: " << endl;
        cout << "5. Delete" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> op;
        switch (op)
        {
            case 1 : {
                usermanage.registerUser();
                break;;
            }
            case 2 : {
                string username, password;
                cout << "Enter username: ";
                cin >> username;
                cout << "Enter password: ";
                cin >> password;
                usermanage.LoginUser(username,password);
                break;
            }
            case 3 : {
                usermanage.showUserList();
                break;
            }
            case 4 : {
                string user;
                cout << "Enter username to search: ";
                cin >> user;
                usermanage.search(user);
                break;
            }
            case 5 : {
                string username;
                cout << "Enter user to delete: ";
                cin >> username;
                usermanage.deleteUser(username);
                break;
            }
        }
        cout << "Do you want to continue [Y/N]: ";
        cin >> choice;
    }while(choice == 'y' || choice == 'Y');
    return 0;
}