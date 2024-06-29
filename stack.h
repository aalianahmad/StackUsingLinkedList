#pragma once
#include"node.h"
class Stack
{
	node* top;
public:
	Stack();
	bool isEmpty();
	void push(char);
	char pop();
	void display();
	char stackTop();
};
