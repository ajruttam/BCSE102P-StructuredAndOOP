/*****************************************************
Computation of simple interest
*****************************************************/

#include <iostream>
using namespace std;
int main()
{
	int p,r,t;
	float i;
	cout << "Enter principal, Rate and No. of years: ";
	cin >> p >> r >> t;
	i = p*r*t*0.01;
	cout.precision(2);
	cout << "Simple Interest is " << fixed << i;
	return 0;
}
