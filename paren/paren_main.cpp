#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

bool isBalanced(string s)
{
	vector<char> stringHolder;

	// push / pop
	for (int k = 0; k < s.length(); k++)
	{
		if (s[k] == '(')
			stringHolder.push_back(s[k]);

		if (s[k] == ')')
		{
			if (stringHolder.size() == 0)
				return false;

			stringHolder.pop_back();
		}
	}

	if (stringHolder.size() == 0)
		return true;

	if (stringHolder.size() != 0)
		return false;
}

int main()
{
	ifstream file;
	file.open("balancedTestCases.txt");
	string s;
	while (getline(file, s))
	{
		if (isBalanced(s))
			cout << s << " is balanced." << endl;
		else
			cout << s << " is not balanced. " << endl;
	}

}


