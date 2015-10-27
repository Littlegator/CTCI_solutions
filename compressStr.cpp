#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

string strCompress(string inputStr);

int main(int argc, char* argv[])
{
	cout << strCompress("aaaa") << endl;

	return 0;
}

string strCompress(string inputStr)
{
	vector<int> letterCount(26);
	stringstream returnString;

	fill(letterCount.begin(), letterCount.end(), 0);

	//transform string to lower

	for(string::iterator it = inputStr.begin(); it != inputStr.end(); it++)
	{
		if((*it >= 'a') && (*it <= 'z'))
			letterCount[*it - 'a']++;
	}

	for(int i = 0; i < 26; i++)
	{
		if(letterCount[i])
		{
			returnString << char('a' + i) << letterCount[i];
		}
	}

	if(returnString.str().length() < inputStr.length())
		return returnString.str();
	else
		return inputStr;
}
