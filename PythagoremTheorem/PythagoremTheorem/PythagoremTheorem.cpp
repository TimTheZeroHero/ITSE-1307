// PythagoremTheorem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
 * Name: Timothy Pearson
 * Section: ITSE 1307
 * Homework
 * Description: Solve for "C" in the PythagoremTheorem (A^2 + B^2 = C^2)
 */

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int SideA = 0;
	int SideB = 0;
	double SideC = 0;
	
	std::cout << endl << "To solve A^2 + B^2 = C^2 " << endl;

    std::cout << endl <<"Please enter number for 'A': ";
	cin >> SideA;

	std::cout << endl <<"Please enter number for 'B': ";
	cin >> SideB;

	SideC = sqrt((SideA * SideA) + (SideB * SideB));
	//Remember this: SideC = sqrt(pow(SideA, 2) + pow(SideB, 2));
	
	std::cout << endl << "The answer will be "<< SideC <<" for 'C'" << endl;
}

