#include <stdlib.h>
#include <stdio.h>
/* *
 * @brief program to find the factorial of a given number 
 * */
int main(void)
{
  int number    = 0;
  int factorial = 1;

  printf("Enter  number: \n");
  scanf("%d", &number);

  if (number > 0)
  {
    for (int i = 1; i <= number; ++i) 
    {
      factorial *= i;
    }
    printf("Factorial of %d = %d \n", number, factorial);
  }
  else
  {
    printf("Factorial of %d = %d \n", number, 0);
  }
}
