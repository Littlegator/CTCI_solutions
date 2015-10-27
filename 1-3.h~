#include <algorithm>

int strings_permutations(string inputStr1, string inputStr2)
{
	string sortedStr1 = inputStr1;
	string sortedStr2 = inputStr2;

	//check length, if not equal, can't be permutations
	if(sortedStr1.length() == sortedStr2.length())
		return 0;

	//sort strings for comparison
	sort(sortedStr1.begin(), sortedStr1.end());
	sort(sortedStr2.begin(), stortedStr2.end());

	//if strings are sorted and equal, they are permutations of each other
	if(sortedStr1 == sortedStr2)
		return 1;
	else
		return 0;	
}
