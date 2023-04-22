#include <iostream>
#include <string>

using namespace std;

const int MAX_USERS = 100; // Maximum number of registered users

// User class to represent a registered user
class User {
private:
    string username;
    string password;
public:
    User() {}

    User(string username, string password) {
        this->username = username;
        this->password = password;
    }

    string getUsername() {
        return username;
    }

    string getPassword() {
        return password;
    }

    void setUsername(string username) {
        this->username = username;
    }

    void setPassword(string password) {
        this->password = password;
    }

    bool operator==(const User& other) const {
        return username == other.username;
    }
};

// UserDatabase class to store registered users
class UserDatabase {
private:
    User users[MAX_USERS];
    int numUsers;
public:
    UserDatabase() {
        numUsers = 0;
    }

    bool addUser(string username, string password) {
        if (numUsers < MAX_USERS) {
            User user(username, password);
            users[numUsers++] = user;
            return true;
        }
        return false; // Maximum users reached
    }

    User* getUser(string username) {
        for (int i = 0; i < numUsers; i++) {
            if (users[i] == User(username, "")) {
                return &users[i];
            }
        }
        return NULL;
    }
};

// LoginSystem class to handle login and registration
class LoginSystem {
private:
    UserDatabase db;
    User* currentUser;
public:
    LoginSystem() {
        currentUser = NULL;
    }

    bool registerUser(string username, string password) {
        return db.addUser(username, password);
    }

    bool login(string username, string password) {
        User* user = db.getUser(username);
        if (user != NULL && user->getPassword() == password) {
            currentUser = user;
            return true;
        }
        return false;
    }

    bool isLoggedIn() {
        return currentUser != NULL;
    }

    void logout() {
        currentUser = NULL;
    }
};

// Main function to test the login and registration system
int main() {
     LoginSystem system;

    string username, password;
	int choice;
	cout<<"Enter 1 to REGISTER and 2 to LOGIN :";
	cin>>choice;
	if(choice==1){
    cout << "Enter username to register: ";
    cin >> username;
    cout << "Enter password to register: ";
    cin >> password;
	
    if (system.registerUser(username, password)) {
        cout << "Registration successful!" << endl;
    }
    else {
        cout << "Maximum users reached." << endl;
        return 0;
    }
}
else if(choice==2){
    cout << "Enter username to login: ";
    cin >> username;
    cout << "Enter password to login: ";
    cin >> password;

    if (system.login(username, password)) {
        cout << "Login successful!" << endl;
        // Do something when the user is logged in
        system.logout();
    }
    else {
        cout << "Invalid username or password." << endl;
    }

}
else{
	cout<<"INVALID Choice";
}
    return 0;
}

