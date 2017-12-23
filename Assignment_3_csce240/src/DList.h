/*
 * DList.h
 *
 *  Created on: Feb 21, 2017
 *      Author: hfaust
 */
#include <iostream>
#ifndef DLIST_H_
#define DLIST_H_

class Node {
public:
	//Node();
	Node(int); //constructor to create a Node with the input int
	virtual ~Node();
	int data; //the data held by the node
	Node* parent; //the parent of the Node aka previous
	Node* child; //the child of the Node aka next
	int GetData(); //return the int held by the Node

};



class DList {
public:
	DList();
	virtual ~DList();
	DList(const DList &);
	void PushFront(int a); //create a Node containing int a and add it to the front of the list
	void PushEnd(int a); //create a Node containing int a and add it to the end of the list
	Node* PopFront();//pop out the first Node of the list, if list is empty, return NULL
	Node* PopEnd(); //pop out the last Node of the list, if list is empty, return NULL
	void PrintListForward(); //print every element from start to end in one line separated by a space
	void PrintListReverse(); //print every element from end to start in one line separated by a space
	Node* head;
	Node* tail;
	int size;
	int getSize(DList);
};

#endif /* DLIST_H_ */

