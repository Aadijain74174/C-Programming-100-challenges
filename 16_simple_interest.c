#include <stdio.h>
int main()
{
float principal, rate, time;
printf("Welcome to simple interest caculatour\n");
printf("Please enter the principal value: ");
scanf("%f", &principal); 
printf("Now, enter the rate: ");
scanf("%f", &rate);
printf("Now, enter the time: ");
scanf("%f", &time);

float Interest (principal*rate*time)/100, Total principal + Interest;
printf("Simple ineterest is %f", Interest);
printf("\nTotal value is %f", Total);
return 0;
}