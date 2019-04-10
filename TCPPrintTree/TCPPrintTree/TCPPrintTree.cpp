// TCPPrintTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
 * Name: Timothy Pearson
 * Section: ITSE 1307
 * Homework
 * Description: Make a tree out of *'s
 */

#include "pch.h"
#include <iostream>
using namespace std;

void printStars(int blanks, int starsInLine);

int main()
{
	int TreeHeight=0;
	int counter = 0;
	int noOfBlanks = 0;

	cout << "Please enter the height of the tree: " << endl;
	cin >> TreeHeight;
	
	cout << endl << endl;
	noOfBlanks = 30;

	for (counter = 1; counter <= TreeHeight; counter++) {
		printStars(noOfBlanks, counter);
		noOfBlanks--;
	}

	return 0;
}

void printStars(int blanks, int starsInLine) {
	int count = 0;

	for (count = 1; count <= blanks; count++)
		cout << ' ';
	for (count = 1; count <= starsInLine; count++)
		cout << " *";
	cout << endl;
}