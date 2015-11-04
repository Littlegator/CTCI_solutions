#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;

string stringCompress(string inputStr);

int main()
{
	cout << stringCompress("aj4jask3%@&#${") << endl;

	return 0;
}

string stringCompress(string inputStr)
{
	unordered_map<char, int> charMap;
	string retVal;

	for(int i = 0; i < inputStr.length(); i++)
	{
		int curChar = charMap[inputStr[i]];
		
		if(curChar)
			charMap[inputStr[i]] = curChar+1;
		else
			charMap[inputStr[i]] = 1;
	}

	for(int i = 0; i < 256; i++)
	{
		if(charMap[i])
		{
			retVal += char(i);
			retVal += to_string(charMap[i]);
		}
	}

	return retVal;
}
