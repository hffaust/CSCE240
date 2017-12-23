//============================================================================
// Name        : CSCE240Project4.cpp
// Author      : Harry Faust
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Priority Queue Class and Driver
//============================================================================

#include <iostream>
#include <exception>
#include <cstdlib>
#include "PQ.h"
using namespace std;

int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	PQ pq;
	try
	{
		pq.Push(1);
		pq.Push(2);
		pq.Push(3);
		pq.Push(4);
		pq.Push(5);
		pq.Push(6);
		pq.Push(7);
		pq.Push(8);
		pq.Push(9);
		pq.Push(10);

		while(!pq.isEmpty())
		{
			cout << pq.Pop() << endl;
		}
	}
	catch(const exception&)
	{
		return EXIT_FAILURE;
	}
	return 0;
}
