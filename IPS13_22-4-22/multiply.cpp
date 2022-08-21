/*****************************************************
Multiplication of two floating point numbers
*****************************************************/

#include <iostream>
using namespace std;
int main()
{
	float a,b;
	cout << "Enter 2 numbers to get the product of them: ";
	cin >> a >> b;
	cout.precision(2);
	cout << "Product of 2 numbers is " << fixed << a * b;
	return 0;
}