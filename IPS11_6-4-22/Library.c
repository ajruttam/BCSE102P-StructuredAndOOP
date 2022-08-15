/************************************************
Create a structure called library to hold accession number, title of the book, author name, price of the book and flag indicating whether book is issued or not. Write a menu-driven program that implements the working of a library. The menu options should be:
  a. Add book information
  b. Display book information
  c. List all books of given author
  d. List the title of specified book
  e. List the count of books in the library
  f. List the books in the order of accession number
  g. exit
************************************************/

#include <stdio.h>
#include <string.h>
struct library
{
	int accno;
	char title[30], author[30];
	int price, flag;
};
struct library book[50] = {{4, "Let's C", "Rakesh", 240, 1}, {3, "Complete Reference", "Herbert", 400, 1}, {5, "Python", "Uttam", 100, 0}, {1, "Refer pypy", "Uttam", 200, 0}, {2, "Happy Time", "Shakespeare", 250, 1}};
int count = 5;

void add()
{
	printf("Enter the details of the book:\n");
	printf("Accession no.: ");
	scanf("%d", &book[count].accno);
	printf("Title of the book: ");
	scanf("\n%[^\n]%*c", &book[count].title);
	// fgets(book[count].title,30,stdin);
	printf("Author Name: ");
	scanf("%[^\n]%*c", &book[count].author);
	printf("Price of the book: ");
	scanf("%d", &book[count].price);
	printf("Flag (1 for issued else 0): ");
	scanf("%d", &book[count].flag);
	count++;
	printf("The details of the book are successfully entered!!\n\n");
}

void disp(int n)
{
	for (int j = 0; j < count; j++)
	{
		if (book[j].accno == n)
		{
			printf("Accession number: %d\n", book[j].accno);
			printf("Title of the book: %s\n", book[j].title);
			printf("Author Name: %s\n", book[j].author);
			printf("Price of the book: %d\n", book[j].price);
			printf("Book is %s.\n\n", ((book[j].flag) ? "issued" : "not issued"));
		}
	}
}

void display()
{
	printf("Enter the accession number: ");
	int acc, c = 1;
	scanf("%d", &acc);
	for (int i = 0; i < count; i++)
	{
		if (book[i].accno == acc)
		{
			printf("The book details are:\n");
			printf("Accession number: %d\n", book[i].accno);
			printf("Title of the book: %s\n", book[i].title);
			printf("Author Name: %s\n", book[i].author);
			printf("Price of the book: %d\n", book[i].price);
			printf("Book is %s.\n\n", ((book[i].flag) ? "issued" : "not issued"));
			;
			c = 0;
		}
	}
	if (c)
		printf("There is no book of entered accession number.\n\n");
}

void disp_author()
{
	char au[30];
	int c = 1;
	printf("Enter the author name: ");
	scanf("%s", &au);
	printf("The Books are ");
	for (int i = 0; i < count; i++)
	{
		if (!strcmp(book[i].author, au))
		{
			printf("\n%s", book[i].title);
			c = 0;
		}
	}
	if (c)
		printf("not available for this author.");
	printf("\n\n");
}

void title()
{
	int acc, c = 1;
	printf("Enter the accession number: ");
	scanf("%d", &acc);
	for (int i = 0; i < count; i++)
		if (book[i].accno == acc)
		{
			printf("The title of the book is %s\n\n", book[i].title);
			c = 0;
		}
	if (c)
		printf("There is no book of entered accession number.\n\n");
}

void total()
{
	printf("The number of the books in the library is %d\n\n", count);
}

void order()
{
	int arr[count];
	for (int i = 0; i < count; i++)
		arr[i] = book[i].accno;
	int temp;
	for (int i = 0; i < count; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < count; i++)
		disp(arr[i]);
}

int main()
{
	while (1)
	{
		printf("Enter 1 to add book information\nEnter 2 to display book information of a perticular book\n");
		printf("Enter 3 to list all the books of the author\nEnter 4 to list the title of specific book\n");
		printf("Enter 5 to list the count of books in the library\nEnter 6 to list the books in the order of accession number\n");
		printf("Enter 7 to exit\nEnter the choice: ");
		int choice;
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			add();
			break;
		case 2:
			display();
			break;
		case 3:
			disp_author();
			break;
		case 4:
			title();
			break;
		case 5:
			total();
			break;
		case 6:
			order();
			break;
		}
		if (choice == 7)
			break;
	}
	return 0;
}