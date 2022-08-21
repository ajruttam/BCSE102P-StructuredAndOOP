/*************************************************************************
There are five players from which the most valuable player is to be chosen. 
Each player is to be judged by three judges, who would assign a rank 
to each player. The player whose sum of ranks is highest is chosen as 
most valuable player. Write a program to implement this scheme.
*************************************************************************/

#include <stdio.h>
struct ranks{
	int rank[3],total;
} r[5];
int main()
{
	int max = 0,num = 0;
	for (int i = 0; i < 5; i++)
	{
		printf("Enter the ranks given by 3 judges for player %d is: ", i+1);
		scanf("%d %d %d",&r[i].rank[0],&r[i].rank[1],&r[i].rank[2]);
		r[i].total = r[i].rank[0] + r[i].rank[1] + r[i].rank[2];
		if (max < r[i].total){
			max = r[i].total;
			num = i + 1;
		}
	}
	printf("Player %d is choosen as most valuable player.",num);
	return 0;
}
