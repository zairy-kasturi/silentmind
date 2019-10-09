// ConsoleApplication22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	//declare name as string 
	//cannt use char because char only for a character
	//also cant request input from user using cin>>name
	string name;
	cout << "Plz enter your name : " << endl;
	getline(cin, name);

	//declare two input from user
	//we use selection as medium to create a mini calculator
	//im choose double because we dont know what number user will enter ,so for safety choose double
	double x, y, result;
	cout << "Plz enter two number : " << endl;
	//user enter two numbers and have space between two number such as 45 30
	cin >> x >> y;

	//ask operation
	//declare as char
	char operation;
	cout << "A : addition " << endl;
	cout << "B : subtration " << endl;
	cout << "C : multiply " << endl;
	cout << "D : divide " << endl;
	cin >> operation;

	//process
	if (operation == 'A') {
		result = x + y;
		cout << "This answer is : " << result << endl;
	}
	else if (operation == 'B') {
		result = x - y;
		cout << "This answer is : " << result << endl;
	}
	else if (operation == 'C') {
		result = x * y;
		cout << "This answer is : " << result << endl;
	}
	else if (operation == 'D') {
		result = x / y;
	}
	else
	{
		cout << "invalid operation " << endl;
	}

	//display output
	cout << "Thanks you " << name << endl;

}

