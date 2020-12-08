#include <stdlib.h>
#include <stdio.h>

/* *
 * @brief program in C to Calculate the length of the string using a pointer
 * */
int main(void)
{
  char str[25]      = "Hello";
  char *ptr         = str;
  int  i            = 0;
  int  lenght       = 0;

	while (*(ptr + i) != '\0')
	{
    i++;
    lenght++;
	}

  printf("lenght %d", lenght);
}