// An example of a do-while loop.
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main () {
    float height;
        cout << "How tall are you in centimeters?";
        cin >> height;
    if ((height < 100) || (height > 250))
    {
       cout << "No Way! That can't be right!" << endl;
       cout << "Please be honest...";
    }   
    else if (height < 135)
    {
        cout << "You must be at least 135cm tall to go on this ride." << endl;
        cout << "Sorry!" << endl;
    }
    else 
    {
        cout << "Thanks! Enjoy the ride!";
    }
    return 0;
}
