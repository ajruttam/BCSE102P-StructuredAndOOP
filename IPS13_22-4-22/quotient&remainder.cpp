/*****************************************************
Compute quotient and remainder
*****************************************************/

#include <iostream>
using namespace std;
int main()
{
	int a,b,r;
	float q;
	cout << "Enter 2 numbers: ";
	cin >> a >> b;
	q = a/b;
	cout << "Quotient when " << a << " is divided by " << b << " is " << q << endl;
	r = a%b;
	cout << "Remainder when " << a << " is divided by " << b << " is " << r;
	return 0;
}
