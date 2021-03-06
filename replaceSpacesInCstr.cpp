#include <string>
#include <iostream>
using namespace std;

void cstrReplaceSpaces(char* inputCstr, int cstrLength);


int main(int argc, char* argv[])
{
	char testStr[] = "                    ";
	cout << testStr << endl;

	cstrReplaceSpaces(testStr, 20);

	cout << testStr << endl;
	
	return 0;
}

void cstrReplaceSpaces(char* inputCstr, int cstrLength)
{
	int i = cstrLength-1;
	int spaceCounter = 0;
	int endIterator = cstrLength;

	//count spaces in string
	//first move to end of string and ignore spaces until you find character
	while((inputCstr[i] == ' ') && (i >= 0))
	{
		//cout << "space skipped" << endl;
		i--;
	}

	for(; i >= 0; i--)
	{
		if(inputCstr[i] == ' ')
		{
			//cout << "space found" << endl;
			spaceCounter++;
		}
	}

	//cout << spaceCounter << endl;

	if(spaceCounter == 0)
		return;

	//apply null terminator at proper position
	inputCstr[endIterator] = 0;

	//move characters back to fit in new chars
	//if space, replace with %20
	while(spaceCounter > 0)
	{
		endIterator--;
		inputCstr[endIterator] = inputCstr[endIterator-2*spaceCounter];
		
		if(inputCstr[endIterator] == ' ')
		{
			inputCstr[endIterator] = '0';
			inputCstr[endIterator-1] = '2';
			inputCstr[endIterator-2] = '%';

			endIterator -= 2;
			spaceCounter--;
		}

		//cout << inputCstr << endl;
	}
}
