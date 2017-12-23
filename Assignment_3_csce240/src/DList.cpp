/*
 * DList.cpp
 *
 *  Created on: Feb 21, 2017
 *      Author: hfaust
 */

#include "DList.h"
#include <iostream>
using namespace std;

Node::Node(int i) {
		data = i;
		parent = NULL;
		child = NULL;
}

Node::~Node() {
	// TODO Auto-generated destructor stub

	//delete parent;
	//delete child;
}
int Node::GetData(){
	return this->data;
}
int getSize(DList list)
{
	int i = list.size;
	return i;
}
DList::DList() {
		head = NULL;
		tail = NULL;
		size = 0;
}
//template <class T>
DList::DList(const DList& input)
{

	head = NULL;
	tail = NULL;
	Node* temp = input.head;
	while(temp != NULL)
	{
		PushFront(temp->data);
		temp = temp->child;
	}
//	for(int i = 0; i < input.size; i++)
//	{
//		//cout<<input.size << endl;
//		PushEnd(temp->data);
//		temp = temp->child;
//	}


//	Node* node = input.head;
//	Node** tail = &head;
//	while(node)
//	{
//		*tail = new Node(node->data);
//		tail = tail->child;
//		node = node->child;
//	}
}
//DList::DList(const DList & input) = default;
//{
	//TODO we need to implement it
	//head = NULL;
	//tail = NULL;


//}
DList::~DList() {
	delete head;
	delete tail;
}
void DList::PushFront(int a)
{
	Node* temp = new Node(a);
	if(head == NULL)
	{
		head = tail = temp;
	}
	else
	{
		head->parent = temp;
		temp->child = head;
		head = temp;
	}
	//size++;
}
void DList::PushEnd(int a)
{
	Node* temp = new Node(a);
	if(head == NULL)
	{
		head = tail = temp;
	}
	else
	{
		tail->child = temp;
		temp->parent = tail;
		tail = temp;
	}
	//size++;
}
Node* DList::PopFront()
{
	int val;
	Node* temp = NULL;

	if(head==NULL)
	{
		return NULL;
	}

	else
	{
		val = head->data;
		temp = head;
		temp->data = val;
		head = head->child;
		size--;
		return temp;
		delete temp;
	}

}
Node* DList::PopEnd()
{
	int val;
	Node* temp = NULL;
	if(tail==NULL)
	{
		return NULL;
	}

	else
	{
		val = tail->data;
		//Node* temp = new Node(val);
		temp = tail;
		temp->data = val;
		tail = tail->parent;
		size--;
		return temp;
		delete temp;
	}
}
void DList::PrintListForward()
{
	Node *temp = head;
	cout << "\nNodes in forward order:" << endl;
	while(temp != NULL)
	{
		cout << temp->data << " " ;
		temp = temp->child;
		if(temp==NULL)
		{
			cout << "\n" << endl;
		}
	}
}
void DList::PrintListReverse()
{
	Node *temp = tail;
	cout << "\nNodes in reverse order: " << endl;
	while(temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->parent;
		if(temp==NULL)
		{
			cout << "\n" << endl;
		}
	}
}



