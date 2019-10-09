// ConsoleApplication21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{

	int x, y;
	double result;
	string name;

	cout << "Plz enter your name : " << endl;
	getline(cin, name);

	//request input from user
	cout << "Plz enter two numbers : " << endl;
	cin >> x >> y;

	char operation;
	//give info about operation
	cout << " A : Addition " << endl;
	cout << " B : Subtration " << endl;
	cout << " C : Multiply " << endl;
	cout << " D : Divide " << endl;
	cin >> operation;

	
	//process
	switch (operation)
	{
	case('A'):
		result = x + y;
		cout << "Answer : " << result << endl;
		break;
	case('B'):
		result = x - y;
		cout << "Answer : " << result << endl;
		break;
	case('C'):
		result = x * y;
		cout << "Answer : " << result << endl;
		break;
	case('D'):
		result = x / y;
		cout << "Answer : " << result << endl;
		break;
	default:
		cout << "Enter a wrong operation " << endl;

	}

	//display output

	cout << "Thanks you " << name << endl;
}


