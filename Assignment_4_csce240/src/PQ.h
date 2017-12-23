/*
 * PQ.h
 *
 *  Created on: Mar 17, 2017
 *      Author: hfaust
 */

#ifndef PQ_H_
#define PQ_H_
#include <iostream>
#include <exception>
#include <cstdlib>

struct Node
{
	int data;
	Node* l;
	Node* r;
	Node(int val)
	: data(val),l(NULL),r(NULL){}
};
class PQ
{
private:
	Node* root;
	void Push(int value, Node* aNode);
	int Pop(Node* aNode, Node* parent);
	void DeletePQ(Node* aNode);

public:
	PQ();
	~PQ();
	void Push(int value);
	int Pop();
	void DeletePQ();
	bool isEmpty();
};
#endif /* PQ_H_ */
