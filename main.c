#include <stdlib.h>
#include <stdio.h>

/* *
 * @brief program in C to find the largest element using Dynamic Memory Allocation
 * */
int main(void)
{
  int lenght = 0;

  printf("input lenght");
  scanf("%d", &lenght);
  printf("lenght - %d  \n", lenght);

  int array[lenght];
  int *ptr;

  if((ptr = malloc(sizeof(array))) != NULL)
  {
    for(int i = 0; i < lenght; i++)
    {
      printf("input number %d \n", i);
      scanf("%d", (ptr + i));
      printf("element - %d : %d \n", i, *(ptr + i));
    }

    int swap = 0;

    for(int i = 0; i < lenght - 1; i++)
    {
      for(int j = 0; j < lenght - i - 1; j++)
      {
        if (*(ptr + j) > *(ptr + j + 1))
        {
          swap           = *(ptr + j);
          *(ptr + j)     = *(ptr + j + 1);
          *(ptr + j + 1) = swap;
        }
      }
    }

    printf("sorted array \n");

    for (int i = 0; i < lenght; i++)
    {
      printf("element - %d : %d \n", i, *(ptr + i));
    }

    printf("The Largest element is - %d  \n", *(ptr + (lenght - 1)));
  }
}
