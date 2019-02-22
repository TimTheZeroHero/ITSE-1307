/*
 * Name:Timothy	Pearson
 * Section: ITSE 1307
 * Conversions With Percision
 * Description: Converting miles to  kilometers with decimals
 */

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	double miles = 0;
	double kilo = 0;
	cout << "Please enter the miles you would like to convert: ";
	cin >> miles;

	kilo = miles * 1.609;
	cout << "there are " << kilo << " kilometers " << "in " << miles << "  miles";
}
