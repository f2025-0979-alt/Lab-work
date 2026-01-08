#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    bool correct = false;

    while (!correct) {
        cout << "Enter password: ";
        cin >> password;

        if (password == "Python123") {
            cout << "Access granted!" << endl;
            correct = true;
        } else {
            cout << "Incorrect password. Try again." << endl;
        }
    }

    return 0;
}
