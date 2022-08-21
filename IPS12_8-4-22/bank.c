/*************************************************************************
Create a structure that can contain the data of customers in a bank. 
The data to be stored is account number, name, and balance in account. 
Assume maximum of 50 customers in the bank. 

a. Write a function to print the account number and name of each customer with balance below Rs. 100
b. If a customer requests for withdrawal or deposit, the form contain the fields acc no, amount, 
	code ( 1 for deposit, 0 for withdrawal)
c. Write a function that prints a message “the balance is insufficient for the specified withdrawal”, 
	if on the withdrawal the balance falls below Rs 100.
*************************************************************************/

#include <stdio.h>

struct bank{
	unsigned long long int accno;
	char name[20];
	long long int bal;
};
struct bank c[50] = {{1234567890,"Uttam",20000},{9876543210,"Rakesh",90},{1029384756,"Sita",10000},{2910385647,"Geeta",40},{8192034756,"Ram",500}};

void bal100(){
	printf("The customer's balance below 100 are:\n");
	int i = 0;
	while(c[i].accno){
		if (c[i].bal < 100)
		{
			printf("Account Number: %lld\n",c[i].accno);
			printf("Name: %s\n",c[i].name);
		}
		i++;
	}
}

void display()
{
	printf("The balance is insufficient for the specified withdrawal.");
}

int main()
{
	bal100();
	printf("\nEnter 0 for withdrawal, 1 for deposit: ");
	int ch;
	scanf("%d",&ch);
	long long int acc,amount;
	printf("Enter the account number: ");
	scanf("%lld",&acc);
	switch (ch)
	{
		case 1:
			printf("Enter the amount to be deposited: ");
			scanf("%lld",&amount);
			int i;
			for (i = 0; i < 5; i++)
			{
				if (c[i].accno == acc){
					c[i].bal += amount;
					break;
				}
			}
			printf("Amount has been deposited successfully!!\n");
			printf("The account balance now is %lld",c[i].bal);
			break;
		case 0:
			printf("Enter the amount to be withdrawed: ");
			scanf("%lld",&amount);
			for (i = 0; i < 5; i++)
			{
				if (c[i].accno == acc)
				{
					c[i].bal -= amount;
					break;
				}
			}
			if (c[i].bal < 100)
				display();
			else
			{
				printf("Amount has been withdrawn successfully!!\n");
				printf("The account balance now is %lld",c[i].bal);
			}
	}
	return 0;
}
