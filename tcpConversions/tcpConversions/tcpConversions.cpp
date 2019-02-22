/*
 * Name:Timothy	Pearson
 * Section: ITSE 1307
 * Conversions
 * Description: Converting miles to  kilometers
 */

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int miles = 0;
	int kilo = 0;
    cout << "Please enter the miles you would like to convert: ";
	cin >> miles;

	kilo = miles * 1.609;
	cout << "there are " << kilo<< " kilometers " << "in "<< miles << "  miles";
}

