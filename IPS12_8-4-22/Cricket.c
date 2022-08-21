/*************************************************************************
A record contains name of cricketer, his age, number of test matches that he 
has played and average runs that he has scored in each test match. 
Create an array of structures to hold records of 20 such cricketers and 
then write the program to read these records and arrange them in ascending 
order by average runs. Use the qsort() standard library function.
*************************************************************************/

#include <stdio.h>
#include <stdlib.h>
struct cricket{
	int avg;
	char name[50];
	int age,test;
};
struct cricket play[20] = { 122, "Sachin Tendulkar", 30, 67, 97, "Virendra Sehwag", 35, 56, 66, "Irfan Pathan K", 32, 45, 153, "Yusuf Pathan K", 36, 21, 101, "Yuvaraj Singh", 32, 45, 200, "Mahendra S Dhoni", 39, 150, 190, "Virat Kohli ", 36,135, 25, "Hardhik Pandya", 22, 10, 65, "Rohith G Sharma", 35, 112, 37, "K Lokesh Rahul", 20, 50, 100, "Rahul Sh Dravid",28,100, 110, "Saurav Ganguly", 30, 120, 105, "Anil Sw Kumble", 50,140, 130, " Sunil Gavaskar", 40, 200, 160, "Kapil D Nikhanj", 50, 230, 103, "Vijay S Hazare", 89, 200, 107, "Suresh K Raina", 40, 200, 96, "Gautam Gambhir", 48, 194, 94, "Mohmad Azaruddin", 60, 100, 40, "Harbhajan Singh", 42, 140 };
int sort(const void*a, const void*b)
{
	return (*(int*)a - *(int*)b);
}
int main()
{
	qsort(play, 20, sizeof(struct cricket), sort);
	printf("The sorted records based on average runs are:\n");
	for (int i = 0; i < 20; i++)
		printf("Name: %s\t\tAge: %d\t\tNumber of test matches: %d\t\tAverage runs: %d\n",play[i].name,play[i].age,play[i].test,play[i].avg);
	return 0;
}
