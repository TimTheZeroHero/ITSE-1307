// tcpBusinessCardWithOutput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fileVCard;

	fileVCard.open("BusinessCard.vcf");
	fileVCard << "BEGIN:VCARD" << endl;
	fileVCard << "ORG:PC Moves" << endl;
	fileVCard << "TITLE:Mover" << endl;
	fileVCard << "N:Peason;Timothy;;" << endl;
	
	fileVCard << "EMAIL:Tpearson14@student.alamo.edu" << endl;
	fileVCard << "TEL;WORK;VOICE:(210) 602-3398" << endl;
	fileVCard << "ADR;WORK;PREF:;;9207 Ridge Cross;San Antonio;TX;78250;USA" << endl;
	fileVCard << "END:VCARD" << endl;

	fileVCard.close();
}
