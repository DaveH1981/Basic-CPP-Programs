#include <iostream>

int main() {
  int age;
  std::cout << "How old are you?\n";
  std::cin >> age;
  switch (age)
    { 
      case 1 :
        {
        std::cout << "You are 1 year old.";
        break;
        }
      case 2 :
        {
        std::cout << "You are 2 years old.";
        break;
        }
      case 3 :
        {
        std::cout << "You are 3 years old.";
        break;
        }
      default :
        {
        std::cout << "Whoa, mama! You are OLD!!!";
        }
    }
    return 0;
}
