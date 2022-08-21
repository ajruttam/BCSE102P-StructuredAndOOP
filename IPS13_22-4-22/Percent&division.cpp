/*****************************************************
Compute the total percentage and division of the student
Question: 5 subject marks. Compute percentage. 
If per >= 60, then 1st division, if 50 <= per < 60, then 2nd division, if 40 <= per < 50, then 3rd division else Fail

Input:
5 subject marks

Output:
Percentage and Division
*****************************************************/

#include <iostream>
using namespace std;
int main()
{
	int m1, m2, m3, m4, m5, total;
	float per;
	cout << "Enter the marks: ";
	cin >> m1 >> m2 >> m3 >> m4 >> m5;
	per = (m1+m2+m3+m4+m5)/5.0;
	cout.precision(2);
	cout << "The percentage is " << fixed << per << endl << "The student is ";
	if (per >= 60)
		cout << "in First Division";
	else if (per >= 50)
		cout << "in Second Division";
	else if (per >= 40)
		cout << "in Third Division";
	else
		cout << "Failed";
	return 0;
}
