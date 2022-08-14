/*************************************************************
Profit and Loss

If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or
incurred loss. Also determine how much profit he made or loss he incurred.
*************************************************************/

#include <stdio.h>
int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    if (cp>sp)
    {
        printf("loss\n%d",cp-sp);
    }
    else
    {
        printf("profit\n%d",sp-cp) ;
    }
    return 0;
}