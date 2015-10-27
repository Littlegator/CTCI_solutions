#ifndef LLCLASS_HPP
#define LLCLASS_HPP
#include <iostream>

class llnode
{
	public:
	llnode();
	void addNode(int valToAdd);
	int getData();
	void setData(int newData);
	llnode* getNext();
	void setNext(llnode* newNext);
	void delNext();
	void display();

	private:
	llnode* next;
	int data;
};

llnode::llnode()
{
	data = 0;
	next = NULL;
}

void llnode::addNode(int valToAdd)
{
	//declare variables	
	llnode* newNode = new(llnode);
	llnode* curNode = next;

	//store data in new node
	newNode->setData(valToAdd);

	//if current node is already null (only 1 item in list)
	if(curNode == NULL)
	{
		next = newNode;
		return;
	}
	
	//otherwise iterate through list until next node is NULL
	else while(curNode->getNext() != NULL)
	{
		curNode = curNode->getNext();
	}

	//add item to end of list
	curNode->setNext(newNode);

	return;
}

int llnode::getData()
{
	return data;
}

llnode* llnode::getNext()
{
	return next;
}

void llnode::setData(int newData)
{
	data = newData;
	return;
}

void llnode::setNext(llnode* newNext)
{
	next = newNext;
	return;
}

void llnode::delNext()
{
	llnode* nextPointer;
	llnode* nextNextPointer;

	if(next != NULL)
	{
		nextPointer = next;
		nextNextPointer = next->next;
		next = nextNextPointer;
		delete(nextPointer);
	}
}

void llnode::display()
{
	llnode* nodeIter = this;

	while(nodeIter != NULL)
	{
		std::cout << nodeIter->getData() << std::endl;
		nodeIter = nodeIter->getNext();
	}
}
#endif //LLCLASS_HPP
