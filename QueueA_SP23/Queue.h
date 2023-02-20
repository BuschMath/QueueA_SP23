#ifndef QUEUE_H
#define QUEUE_H

#include "ItemType.h"

class Queue
{
public:
	Queue();
	~Queue();

	void MakeEmpty();
	bool IsEmpty();
	bool IsFull();
	void Enqueue(ItemType item);
	ItemType Dequeue();

private:
	ItemType items[Max_Items];
	int front;
	int back;
};

#endif // !QUEUE_H