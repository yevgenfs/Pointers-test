#include <stdlib.h>
#include <stdio.h>

/* *
 * @brief program in C to store n elements in an array and print the elements using pointer
 * */
int main(void)
{
  int lenght = 0;

  printf("input lenght");
  scanf("%d", &lenght);
  printf("lenght - %d  \n", lenght);

  int array[lenght];
  int *ptr = array;

  for(int i = 0; i < lenght; i++)
  {
    printf("input number %d \n", i);
    scanf("%d", (ptr+i));
    printf("element - %d : %d \n", i, *(ptr+i));
  }
}