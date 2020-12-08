#include <stdlib.h>
#include <stdio.h>

/* *
 * @brief program in C to print the elements of an array in reverse order
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

  int lenght_counter = lenght;
  char temp = ""; 

  for (int j = 0; j<lenght/2; j++)
  {
    temp                    = *(ptr+j);
    *(ptr+j)                = *(ptr+lenght_counter-1);
    *(ptr+lenght_counter-1) = temp;
    lenght_counter--;
  }

  printf("reversed");

  for(int i = 0; i < lenght; i++)
  {
    printf("element - %d : %d \n", i, *(ptr+i));
  }
}
