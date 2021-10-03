#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue()
{
	begin = NULL;
	end = NULL;
}

void Queue::push(int elem)
{
	if (begin != NULL) {
		end->next = new Node;
		end = end->next;
		end->num = elem;
	}
	else 
	{
		begin = new Node;
		end = begin;
		end->num = elem;
	}
}

bool Queue::empty() 
{
	return begin == NULL;
}

int Queue::front() 
{
	return begin->num;
}

int Queue::back() 
{
	return end->num;
}

void Queue::pop() 
{
	Node* temp = begin;
	begin = begin->next;
	delete(temp);
	if (begin == NULL)
	{
		end = NULL;
	}
}