// TCPVowelFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
 * Name: Timothy Pearson
 * Section: ITSE 1307
 * Homework
 * Description: Return a value true if a given character is a vowel and otherwise returns false.
 */

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	char Vowel;

    cout << "Please enter a letter: " << endl;
	cin >> Vowel;

	bool isVowel(char Vowel); {
		if (Vowel == 'a' || Vowel == 'e' || Vowel == 'i' || Vowel== 'o' || Vowel == 'u') {
			cout << "True" << endl;
		}
		else {
			cout << "False" << endl;
		};
	}
}
