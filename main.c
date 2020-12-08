#include <stdlib.h>
#include <stdio.h>

/* *
 * @brief program  to count the number of vowels and consonants in a string 
 * */
int main(void)
{
  char str[20]  = "";
  int  vowels   = 0;
  int  constant = 0;

  printf("enter str \n");
  fgets(str, sizeof str, stdin);

  char *ptr = str;

  for (int i = 0; *(ptr+i) !='\0'; i++)
  {
    if (*(ptr+i) == 'a' || *(ptr+i) == 'e' || *(ptr+i) == 'i' || *(ptr+i) == 'u' || *(ptr+i) == 'o')
    {
      vowels++;
    }
    else
    {
      constant++;
    }
  }

  printf("vowels = %d \nconstant = %d \n", vowels, constant);
}
