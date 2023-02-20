#include "Queue.h"

Queue::Queue()
{
	front = -1;
	back = -1;
}

Queue::~Queue()
{
}

void Queue::MakeEmpty()
{
	front = -1;
	back = -1;
}

bool Queue::IsEmpty()
{
	if (front == -1 && back == -1)
		return true;
	return false;
}

bool Queue::IsFull()
{
	if ((back + 1) % Max_Items == front)
		return true;
	return false;
}

void Queue::Enqueue(ItemType item)
{
	if (IsEmpty())
	{
		items[0] = item;
		front = back = 0;
	}
	else if (!IsFull())
	{
		back = (back + 1) % Max_Items;
		items[back] = item;
	}
}

ItemType Queue::Dequeue()
{
	ItemType temp = items[front];

	if ((front + 1) % Max_Items > back)
		front = back = -1;

	front = (front + 1) % Max_Items;

	return temp;
}
