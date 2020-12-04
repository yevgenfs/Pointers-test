#include <stdlib.h>
#include <stdio.h>
int main(void)
{
  int number;
  int factorial = 1;
  printf("Enter  number: \n");
  scanf("%d", &number);
	
  for (int i = 1; i <= number; ++i) 
	{
    factorial *= i;
  }

  printf("Factorial of %d = %d \n", number, factorial);
}