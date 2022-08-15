/************************************************
An automobile company has serial number for engine parts starting from AA0 to FF9. The other characteristics of parts are year of manufacture, material and quantity manufactured.

a. Create a structure to store information corresponding to a part
b. Write a program to retrieve information on parts with serial numbers between BB1 and CC6.
************************************************/

#include <stdio.h>

struct parts
{
	char serial[4];
	int year;
	char material[20];
	int quantity;
};
int main()
{
	struct parts p[60] = {{"AA0", 2009, "Silver", 10}, {"AA1", 2008, "Iron", 11}, {"AA2", 2010, "Aluminium", 6}, {"AA3", 2007, "Tin", 5}, {"AA4", 1990, "Steel", 100}, {"AA5", 1980, "Copper", 43}, {"AA6", 1999, "Bronze", 30}, {"AA7", 2000, "Brass", 70}, {"AA8", 2007, "Amalgum", 20}, {"AA9", 2008, "Zinc", 40}, {"BB0", 2009, "Silver", 10}, {"BB1", 2008, "Iron", 11}, {"BB2", 2010, "Aluminium", 6}, {"BB3", 2007, "Tin", 5}, {"BB4", 1990, "Steel", 100}, {"BB5", 1980, "Copper", 43}, {"BB6", 1999, "Bronze", 30}, {"BB7", 2000, "Brass", 70}, {"BB8", 2007, "Amalgum", 20}, {"BB9", 2008, "Zinc", 40}, {"CC0", 2009, "Silver", 10}, {"CC1", 2008, "Iron", 11}, {"CC2", 2010, "Aluminium", 6}, {"CC3", 2007, "Tin", 5}, {"CC4", 1990, "Steel", 100}, {"CC5", 1980, "Copper", 43}, {"CC6", 1999, "Bronze", 30}, {"CC7", 2000, "Brass", 70}, {"CC8", 2007, "Amalgum", 20}, {"CC9", 2008, "Zinc", 40}, {"DD0", 2009, "Silver", 10}, {"DD1", 2008, "Iron", 11}, {"DD2", 2010, "Aluminium", 6}, {"DD3", 2007, "Tin", 5}, {"DD4", 1990, "Steel", 100}, {"DD5", 1980, "Copper", 43}, {"DD6", 1999, "Bronze", 30}, {"DD7", 2000, "Brass", 70}, {"DD8", 2007, "Amalgum", 20}, {"DD9", 2008, "Zinc", 40}, {"EE0", 2009, "Silver", 10}, {"EE1", 2008, "Iron", 11}, {"EE2", 2010, "Aluminium", 6}, {"EE3", 2007, "Tin", 5}, {"EE4", 1990, "Steel", 100}, {"EE5", 1980, "Copper", 43}, {"EE6", 1999, "Bronze", 30}, {"EE7", 2000, "Brass", 70}, {"EE8", 2007, "Amalgum", 20}, {"EE9", 2008, "Zinc", 40}, {"FF0", 2009, "Silver", 10}, {"FF1", 2008, "Iron", 11}, {"FF2", 2010, "Aluminium", 6}, {"FF3", 2007, "Tin", 5}, {"FF4", 1990, "Steel", 100}, {"FF5", 1980, "Copper", 43}, {"FF6", 1999, "Bronze", 30}, {"FF7", 2000, "Brass", 70}, {"FF8", 2007, "Amalgum", 20}, {"FF9", 2008, "Zinc", 40}};
	char a[3], b[3];
	printf("Enter the start and end serial numbers of the engine parts information to be retrieved: \n");
	scanf("%s %s", a, b);
	int i;
	for (i = 0; p[i].serial[0] != *a; i++)
		;
	i++;
	while (1)
	{
		printf("\nSerial Number : %s", p[i].serial);
		printf("\nYear Of Manufacture : %d", p[i].year);
		printf("\nMaterial Used : %s", p[i].material);
		printf("\nQuantity : %d\n", p[i].quantity);
		i++;
		if (p[i].serial[0] == *b && p[i].serial[2] == *(b + 2))
		{
			printf("\nSerial Number : %s", p[i].serial);
			printf("\nYear Of Manufacture : %d", p[i].year);
			printf("\nMaterial Used : %s", p[i].material);
			printf("\nQuantity : %d\n", p[i].quantity);
			break;
		}
	}
	return 0;
}
