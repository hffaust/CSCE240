/*
 * PQ.cpp
 *
 *  Created on: Mar 17, 2017
 *      Author: hfaust
 */

#include "PQ.h"
#include <iostream>
#include <exception>
#include <cstdlib>
using namespace std;

PQ::PQ() {
	// TODO Auto-generated constructor stub
	root = NULL;
}

PQ::~PQ() {
	// TODO Auto-generated destructor stub
	DeletePQ();
}
void PQ::DeletePQ()	//calls private helper method
{
	DeletePQ(root);
}
void PQ::DeletePQ(Node* node) //private helper method
{
	if(node != NULL)
	{
		DeletePQ(node->l);
		DeletePQ(node->r);
		delete node;
	}
}
void PQ::Push(int value) //for when root is null, when root is not null calls helper method
{
	if(root != NULL)
	{
		Push(value, root);
	}
	else
	{
		root = new Node(value);
	}
}
void PQ::Push(int num, Node * node) //helper method
{
	if(num < node->data)
	{
		if(node->l != NULL)
		{
			Push(num, node->l);
		}
		else
		{
			node->l = new Node(num);
		}
	}
	else
	{
		if(node->r != NULL)
		{
			Push(num, node->r);
		}
		else
		{
			node->r = new Node(num);
		}
	}
}
int PQ::Pop()
{
	int value;
	if(root != NULL)
	{
		if(root->r != NULL)
		{
			value = Pop(root->r, root);
		}
		else
		{
			value = root->data;
			if(root->l != NULL)
			{
				Node * temp = root;
				root = root->l;
				delete temp;
			}
			else
			{
				delete root;
				root = NULL;
			}
		}
	}
	else
	{
		throw std::exception();
	}
	return value;
}

int PQ::Pop(Node * node, Node * parent)
{
	int value;
	while(node->r)
	{
		parent = node;
		node = node->r;
	}
	value = node->data;
	if(node->l != NULL)
	{
		parent->r = node->l;
	}
	else
	{
		parent->r = NULL;
	}
	delete node;
	return value;
}

bool PQ::isEmpty()
{
	return (root == NULL);
}


