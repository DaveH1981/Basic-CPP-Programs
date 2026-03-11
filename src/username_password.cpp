#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string username;
    string password;
    cout << "Please enter your username: ";
    cin >> username; // Takes username input
    cout << "Please enter your password: ";
    cin >> password; // Takes password input

    if (username == "SuperD00d" && password == "r!ghte0us") {
        cout << "Logged in successfully!";
    } else if (username == "user123" && password == "123456") {
        cout << "Logged in successfully!";
    } else if (username == "donkey_dave" && password == "Heatw@v3") {
        cout << "Logged in successfully!";
    } else {
        cout << "Failed to login";
    }
    return 0;
}
