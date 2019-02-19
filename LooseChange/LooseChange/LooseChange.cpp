// LooseChange.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
 * Name: Timothy Pearson
 * Section: ITSE 1307
 * Homework
 * Description: Count 
 */

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int Quarters = 0;
	int Dimes = 0;
	int Nickels = 0;
	int Pennies = 0;
	double FinalChg = 0;
	double Quarter = 0;
	double Dime = 0;
	double Nickel = 0;
	double Pennie = 0;

    std::cout << "Please enter the change you have";
	
	std::cout << endl << "Quarters: ";
	cin >> Quarters;
	Quarter = Quarters * .25;

	std::cout << endl << "Dimes: ";
	cin >> Dimes;
	Dime = Dimes *.10;

	std::cout << endl << "Nickels: ";
	cin >> Nickels;
	Nickel = Nickels * .05;

	std::cout << endl << "Pennies: ";
	cin >> Pennies;
	Pennie = Pennies * .01;

	FinalChg = Quarter + Dime + Nickel + Pennie;

	std::cout << endl << "Total: " << FinalChg;

}
