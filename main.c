#include <stdio.h>

/* *
 * @brief program in C to print a string in reverse using a pointer
 * */
void reverse(char *pointer)
{
  int len = 0;
  int i   = 0;

  while(*(pointer+i)!=NULL)
  {
    len++; 
    printf("%d %c \n",i,*(pointer+i));
    i++;
  }
  
  printf("len %d \n",len);
  char temp = 0;

  for (int j = 0; j<len/2; j++,i--)
  {
    temp               = *(pointer + j);
    *(pointer + j)     = *(pointer + i - 1);
    *(pointer + i - 1) = temp;
  }
}

int main(void) 
{
  char str[]="Hello";
  printf("start string %s \n",str);
  reverse(&str);
  printf("final string %s \n",str);
  return 0;
}
