#include<iostream>
using namespace std;

struct User {
    string username;
    string password;
};

void loginUser(const User &user) {
    if (user.username == user.password) {
        cout << "Welcome, " << user.username << "!" << endl;
    } else {
        cout << "Login failed. Username and password do not match." << endl;
    }
}

int main() {
    User user;
    cout << "Enter username: ";
    cin >> user.username;
    cout << "Enter password: ";
    cin >> user.password;

    loginUser(user);

    return 0;
}
