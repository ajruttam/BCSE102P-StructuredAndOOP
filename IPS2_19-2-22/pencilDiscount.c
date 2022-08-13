/*****************************************************
Discount on pencil
If total cost is more than or equal to Rs. 1000, 10% discount is to be given.
*****************************************************/

#include <stdio.h>
int main()
{
	int num_pen,cost_pen,total_cost;
	float discount,final_cost;
	printf("Enter the number of pencils: ");
	scanf("%d",&num_pen);
	printf("Enter the cost of each pencils: ");
	scanf("%d",&cost_pen);
	total_cost = num_pen*cost_pen;
	if (total_cost>=1000){
		discount = 0.1*total_cost;
		final_cost = total_cost - discount;
		printf("The cost of pencils is %.2f",final_cost);
	}
	else{
		final_cost = total_cost;
		printf("The cost of pencils is %.2f",final_cost);
	}
	return 0;
}
