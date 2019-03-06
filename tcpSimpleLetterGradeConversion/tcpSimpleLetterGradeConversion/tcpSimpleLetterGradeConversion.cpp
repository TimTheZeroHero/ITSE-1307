// tcp242019.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{

	int Grade = 0;

	cout << "Please enter in the grade number: ";
	cin >> Grade;

	if (Grade >= 90 && Grade <= 100) {
		cout << endl << "A" << endl;
	}
	else if (Grade >= 80 && Grade < 90) {
		cout << endl << "B" << endl;
	}
	else if (Grade >= 70 && Grade < 80) {
		cout << endl << "C" << endl;
	}
	else if (Grade < 69) {
		cout << endl << "F" << endl;
	}
}