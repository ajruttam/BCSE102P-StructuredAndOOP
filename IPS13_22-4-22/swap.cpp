/*****************************************************
Swap two numbers
*****************************************************/

#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "Enter 2 numbers: ";
	cin >> a >> b;
	cout << "Numbers before swapping" << endl << "a = " << a << endl << "b = " << b << endl;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "Numbers after swapping" << endl << "a = " << a << endl << "b = " << b << endl;
	return 0;
}
