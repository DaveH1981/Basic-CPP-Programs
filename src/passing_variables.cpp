#include <iostream>
using namespace std;
void GetValue(int height);
void GetAdd (char name[10]);
void GetRef (int &age);
int main ()
{
	int height;
	char name[10];
	int age;
	cout << "How tall are you?" << endl;
	cin >> height;
	cout << "What is your first name?" << endl;
	cin >> name;
	cout << "How old are you?" << endl;
	cin >> age;
	GetValue(height);
	cout << "In six years you may still be " << height << "." << endl;
	GetAdd(name);
	cout << "In six years you will change your name to " << name << "." << endl;
	GetRef(age);
	cout << "In six years you will be " << age << " years old." << endl;
	return 0;
}

void GetValue(int height)
{
	height += 3;
	cout << "If you grow half an inch a year, you will be " << height << " in six years." << endl;
	return;
}

void GetAdd(char name[10])
{
	name [4] = 'e';
	name [5] = 'r';
	name [6] = '\0';
	return;
}

void GetRef(int &age)
{
	age +=6;
	return;
}
