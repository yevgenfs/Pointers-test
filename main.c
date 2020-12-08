#include <stdlib.h>
#include <stdio.h>

/* *
 * @brief program in C to swap elements using call by reference
 * */
void swap (int *first, int *second)
{
  int swaper = *first;
  *first     = *second;
  *second    = swaper;
}

int main(void)
{
  int f = 12;
  int s = 0;
  swap(&f, &s);
  printf("first = %d second = %d \n", f, s);
}
