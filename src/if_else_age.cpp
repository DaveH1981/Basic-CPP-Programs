#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int age = 30;
    
    if ((age >= 2) && (age < 18))
    {
        cout << "You're a kid!";
    } 
    else if (age < 2) 
    {
        cout << "You're a baby! Goo-goo gaga!";
    } 
    else if (age > 120) 
    {
        cout << "Whoa there! Nobody is THAT old!";  
    } 
    else 
    {
        cout << "You're an adult!";
    }
    return 0;
}
