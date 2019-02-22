/*
 * Name:Timothy	Pearson
 * Section: ITSE 1307
 * Simple Math
 * Description: Solve for c=ab/a-b
 */

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	double numbera = 0;
	double numberb = 0;
	double numberc = 0;

	cout << "solve for the equation c=ab/a-b" << endl;
    cout << "Please enter the decimal number for A: " << endl;
	cin >> numbera;

	cout << "Please enter the decimal number for B: " << endl;
	cin >> numberb;

	numberc = ((numbera*numberb) / (numbera - numberb));

	cout << "("<<numbera<<"*"<<numberb<<")"<<"/"<<"("<<numbera<<"-"<<numberb<<")"<<"="<<numberc;

}

