//============================================================================
// Name        : csce240_Assignment_5.cpp
// Author      : Harry Faust
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "BigNum.h"
#include <vector>
#include <string>
using namespace std;

int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	unsigned long long a = 1000000;
	unsigned long long b = 42456;
	vector<Digit> v1, v2;
	BigNum c(a);
	v1 = c.getNumerals();
	BigNum::dataPrint(v1);
	BigNum::numPrint(v1);
	BigNum d(b);
	v2 = d.getNumerals();
	BigNum::dataPrint(v2);
	BigNum::numPrint(v2);
	BigNum e();
	//e = c + d;
	cout << e << endl;

	return 0;
}
