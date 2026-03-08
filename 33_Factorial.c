#include <stdio.h>
int main()
{
  int num;
  printf("Welcome to facotrial calculator.\n");
  printf("Please, enter the number: ");
  scanf(" %d", &num);

  int i =1;
  int fac = 1;
  while(i <= num){
    fac *= i;
    i++;
  }
  printf("The factorial of %d is %d", num, fac);
  return 0;
  /*Write a function that calculates the factorial of a given number.*/
}