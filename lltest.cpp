#include <iostream>
#include "llclass.hpp"
using namespace std;

int main(int argc, char* argv[])
{
	llnode testLL;
	llnode* nodeIter = &testLL;

	testLL.setData(34);
	testLL.addNode(4);
	testLL.addNode(17);

	while(nodeIter != NULL)
	{
		cout << nodeIter->getData() << endl;
		nodeIter = nodeIter->getNext();
	}

	return 0;
}
