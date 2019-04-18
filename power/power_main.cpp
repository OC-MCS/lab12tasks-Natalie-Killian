#include <iostream>
using namespace std;

// Function prototype
int power(int num, int exp);

int main()
{
	int num;
	int num1;
	int num2;
	int num3;

	cout << "2 raised to the 0th power is...\n";
	num = power(2, 0);
	cout << num << endl;
	cout << "2 raised to the 2nd power is...\n";
	num1 = power(2, 2);
	cout << num1 << endl;
	cout << "2 raised to the 3rd power is...\n";
	num2 = power(2, 3);
	cout << num2 << endl;
	cout << "2 raised to the 5th power is...\n";
	num3 = power(2, 5);
	cout << num3 << endl;


	return 0;
}

int power(int num, int exp)
{
	int newNum = 1;

	if (exp == 0)
	{
		newNum *= 1;
	}
	else
	{
		newNum *= num * power(num, exp - 1);
	}

	return newNum;
}


//Write a function that uses recursion to raise a number to a power. The function should
//accept two arguments : the number to be raised and the exponent.Assume that the
//exponent is a nonnegative integer.Demonstrate the function in a program.