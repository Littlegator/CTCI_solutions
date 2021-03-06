#include <iostream>
#include "llclass.hpp"
using namespace std;

llnode* getKthFromLast(llnode* inputList, int k);

int main(int argc, char* argv[])
{
	llnode testLL;

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

	testLL.display();

	cout << endl << getKthFromLast(&testLL, 4)->getData() << endl;

	return 0;
}

llnode* getKthFromLast(llnode* inputList, int k)
{
	llnode* nodeIter = inputList;
	int nodeCounter = 0;

	//check if list is empty
	if(nodeIter == NULL)
		return NULL;

	//handle 1-item case
	//k must be 0
	if(nodeIter->getNext() == NULL)
	{
		if(k == 0)
		{
			delete nodeIter;
			return NULL;
		}

		else
			return NULL;
	}

	//find end of list
	while(nodeIter != NULL)
	{
		nodeCounter++;
		nodeIter = nodeIter->getNext();
	}

	//move nodeIter back to beginning
	nodeIter = inputList;

	//move to kth element and return
	for(int i = 0; i < (nodeCounter - k); i++)
	{
		nodeIter = nodeIter->getNext();
	}

	return nodeIter;
}
