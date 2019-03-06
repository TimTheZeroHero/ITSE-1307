// tcp242019.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{

	int Grade = 0;

	cout << "Please enter in the grade number (0-100): ";
	cin >> Grade;

	if (Grade > 89) {
		cout << endl << "A";
	}
	else if (Grade > 79 && Grade < 90) {
		cout << endl << "B";
	}
	else if (Grade > 69 && Grade < 80) {
		cout << endl << "C";
	}
	else if (Grade > 59 && Grade < 70) {
		cout << endl << "D";
	}
	else if (Grade < 59) {
		cout << endl << "F";
	}

	cout << endl;

	cout << (Grade > 69 ? "Pass" : "Fail") << endl;
}