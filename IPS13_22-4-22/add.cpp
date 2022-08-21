/*****************************************************
Addition of two floating point numbers
*****************************************************/

#include <iostream>
using namespace std;
int main()
{
	float num1, num2, sum;
	cout << "Enter any two floating numbers: ";
	cin >> num1 >> num2;
	sum = num1 + num2;
	cout << "Sum of numbers "<< num1 << " and " << num2 << " is " << sum;
	return 0;
}

