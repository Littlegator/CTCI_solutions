#include <iostream>
#include <map>
#include "llclass.hpp"
using namespace std;

void deleteDuplicates(llnode* inputList);

int main(int argc, char* argv[])
{
	llnode testLL;
	llnode* fastIter = &testLL;
	llnode* slowIter = &testLL;

	testLL.setData(34);
	testLL.addNode(4);
	testLL.addNode(17);
	testLL.addNode(176);
	testLL.addNode(-4);
	testLL.addNode(17);
	testLL.addNode(176);
	testLL.addNode(4);
	testLL.addNode(177);
	testLL.addNode(34);
	testLL.addNode(12387);

	while(fastIter != NULL)
	{
		cout << fastIter->getData() << endl;
		fastIter = fastIter->getNext();
	}

	deleteDuplicates(&testLL);

	cout << endl;
	fastIter = &testLL;

	while(fastIter != NULL)
	{
		cout << fastIter->getData() << endl;
		fastIter = fastIter->getNext();
	}


	return 0;
}

void deleteDuplicates(llnode* inputList)
{
	llnode* curItem = inputList;
	map<int, bool> itemList;

	//check if list is empty
	if(curItem == NULL)
		return;

	//for entire list, add items to map
	//if alread in map, delete
	itemList[curItem->getData()] = 1;
	//cout << curItem->getData() << " added to map" << endl;

	while(curItem->getNext() != NULL)
	{
		if(itemList[curItem->getNext()->getData()] == 0)
		{
			//cout << curItem->getNext()->getData() << " is not a duplicate, added to map" << endl;
			itemList[curItem->getNext()->getData()] = 1;

			curItem = curItem->getNext();
		}
		
		else
		{
			//cout << curItem->getNext()->getData() << " is a duplicate, deleted" << endl;
			curItem->delNext();
		}
	}

	return;
}
