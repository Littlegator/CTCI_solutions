#include <string>
using namespace std;

int strUniqueChars(string inputString)
{
	strLength = inputString.length();

	if(strLength == 0 || strLength > 26)
		return 0;
	else if(strLength == 1)
		return 1;

	bool alphabet[26] = {0};

	for(int i = 0; i < inputString.length(); i++)
	{
		if(alphabet[tolower(inputString[i])] == 1)
			return 0;

		alphabet[inputString[i]] = 1;
	}

	return 1;
}
