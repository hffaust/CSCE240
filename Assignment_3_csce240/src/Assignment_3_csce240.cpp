//============================================================================
// Name        : Assignment_3_csce240.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "DList.h"
#include <iostream>
using namespace std;

int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	//return 0;
	 DList list;
	    int i;

	    //pust 10 numbers to the end
	    for (i = 0; i < 10; i++) list.PushEnd(i);

	    cout << "Print forward\n";
	    list.PrintListForward();
	    cout << "Print reverse\n";
	    list.PrintListReverse();

	    cout << "Pop front and print\n";
	    //print the list from the beginning
	    Node* n = list.PopFront();
	    while ( n != NULL) {
	        cout << n->GetData() << endl;
	        n = list.PopFront();
	    }


	    //pust 10 numbers to the front
	    for (i = 0; i < 10; i++) list.PushFront(i);

	    //test copy constructor
	    DList* list2 = new DList(list);

	    cout << "Pop end and print\n";
	    //print the list from the end
	    n = list2->PopEnd();
	    while ( n != NULL)
	    {
	        cout << n->GetData() << endl;
	        n = list2->PopEnd();
	    }

	    return 0;
}
