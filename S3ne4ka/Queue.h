#ifndef Queue_H
#define Queue_H

#include <vector>

struct Node 
{
	int num;
	Node* next = NULL;
};

class Queue
{
private:
	Node* begin;
	Node* end;
public:
	Queue();
	void push(int elem);
	bool empty();
	int front();
	int back();
	void pop();
};

#endif