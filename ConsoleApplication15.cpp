// ConsoleApplication15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	string filename = "test_data.dat";
	ifstream inputFile;
	inputFile.open(filename.c_str());
	string line1, line2;

	getline(inputFile, line1);
	getline(inputFile, line2);

	cout << line1 << endl;
	cout << line2 << endl;

	inputFile.close();

}
