#include <iostream>
#include <string>
#include <cctype>
#include <fstream>

using namespace std;

// function prototypes
string stripOutJunk(string s);
bool isPalindrome(string string1);


int main()
{
	string startingString;
	string noJunkHere;
	bool YesOrNo;

	ifstream file;
	file.open("testCases.txt");
	while (getline(file, startingString))
	{
		cout << startingString << endl;

		noJunkHere = stripOutJunk(startingString);

		YesOrNo = isPalindrome(noJunkHere);

		if (YesOrNo)
		{
			cout << "It is a palindrome!" << endl;
			cout << endl;
		}
		
		else
		{
			cout << "It is not a palindorme!" << endl;
			cout << endl;
		}
	}

	noJunkHere = stripOutJunk(startingString);

	YesOrNo = isPalindrome(noJunkHere);

	if (YesOrNo)
	{
		cout << "It is a palindrome!" << endl;
	}

	else
	{
		cout << "It is not a palindorme!" << endl;
	}

	return 0;

}

// gets spaces and punctuation out of the string to see if it's a palindrome
string stripOutJunk(string s)
{
	string tempString;

	for (int x = 0; x < s.length(); x++)
	{
		if (isalpha(s[x]))
			tempString += tolower(s[x]);
	}

	return tempString;
}


// sees if string is a palindrome
bool isPalindrome(string string1)
{
	string subString;
	int firstLetter = 0;
	int lastLetter = string1.length() - 1;
	bool YesNo = true;

	if (string1.length() > 1)
	{
		if (string1[firstLetter] == string1[lastLetter])
		{
			string1 = string1.substr(firstLetter + 1, lastLetter - 1);
			YesNo = isPalindrome(string1);
		}
		else
		{
			YesNo = false;
		}
	}

	return YesNo;
}