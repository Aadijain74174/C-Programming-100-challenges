#include <stdio.h>
#include <math.h>
int main()
{
float P, R, T;
printf("Welcome to compund interest caculatour\n"); 
printf("Please enter the principal value: ");
scanf("%f", &P);
printf("Now, enter the rate: ");
scanf("%f", &R);
printf("Now, enter the time: ");
scanf("%f", &T);

float Interest = P * pow((1+R/100), T), Total = P+ Interest;
printf("Compound Interest is %f", Interest);
printf("\nTotal value is %f", Total);
return 0;
}