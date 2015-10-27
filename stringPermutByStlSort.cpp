#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int strings_permutations(string inputStr1, string inputStr2);

int main(int argc, char* argv[])
{
	string str1 = argv[1];
	string str2 = argv[2];

	//cout << str1 << endl << str2 << endl;
	
	cout << strings_permutations(str1, str2) << endl;

	return 0;
}

int strings_permutations(string inputStr1, string inputStr2)
{
	string sortedStr1 = inputStr1;
	string sortedStr2 = inputStr2;

	//check length, if not equal, can't be permutations
	if(sortedStr1.length() != sortedStr2.length())
		return 0;

	//sort strings for comparison
	sort(sortedStr1.begin(), sortedStr1.end());
	sort(sortedStr2.begin(), sortedStr2.end());

	//cout << sortedStr1 << endl << sortedStr2 << endl;

	//if strings are sorted and equal, they are permutations of each other
	if(sortedStr1 == sortedStr2)
		return 1;
	else
		return 0;	
}
