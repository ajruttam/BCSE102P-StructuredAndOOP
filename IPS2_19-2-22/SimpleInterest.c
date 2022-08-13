/********************************
Computation of simple interest
********************************/

#include <stdio.h>
int main() {
    int p,r,t;
    float i;

    printf("Enter principal, Rate and No. of years: ");
    scanf("%d %d %d", &p, &r, &t);
    i = (p*r*t)/100.0;      
    
    printf("Simple interest is %.2f",i);
    return 0;
}
