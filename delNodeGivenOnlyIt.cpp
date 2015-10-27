#include <iostream>
#include "llclass.hpp"
using namespace std;

void deleteNode(llnode* inputNode);

int main(int argc, char* argv[])
{
	llnode testLL;
	llnode* nodeIter = &testLL;

	testLL.setData(1);
	testLL.addNode(2);
	testLL.addNode(3);
	testLL.addNode(4);
	testLL.addNode(5);
	testLL.addNode(6);
	testLL.addNode(7);
	testLL.addNode(8);
	testLL.addNode(9);
	testLL.addNode(10);
	testLL.addNode(11);

	testLL.display();

	for(int i = 0; i < 4; i++)
		nodeIter = nodeIter->getNext();

	deleteNode(nodeIter);

	cout << endl;
	testLL.display();

	return 0;
}

void deleteNode(llnode* inputNode)
{
	inputNode->setData(inputNode->getNext()->getData());
	inputNode->delNext();

	return;
}
