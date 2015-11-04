#include <stdio.h>
#include <stdlib.h>

void strCompress(char inputStr[], char retVal[]);

void main()
{
	char output[] = "test";
	strCompress("aaasssffsdwwerrr3334412@@4445%%%@@@", output);

	return;
}

void strCompress(char inputStr[], char retVal[])
{
	//array to track characters
	int charMap[256];
	int i = 0; //loop iterator

	//initialize array tracking characters
	for(int i = 0; i < 256; i++)
		charMap[i] = 0;

	//for each element in string
	while(inputStr[i] != '\0')
	{
		//increment counter in alphabet
		charMap[inputStr[i]]++;
		i++;
	}

	//for every possible char
	//if it was mapped, output it and it's number
	for(i = 0; i < 256; i++)
	{
		if(charMap[i])
			printf("%c%d", i, charMap[i]);
	}
	printf("\n");

	return;
}
