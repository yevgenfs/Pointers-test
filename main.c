#include <stdio.h>
void revrse(char *pointer)
{
  int len = 0,i = 0;
  while(*(pointer+i)!=NULL)
  {
	len++; 
	printf("%d %c \n",i,*(pointer+i));
	i++;
  }
  printf("len %d \n",len);
  for (int j = 0 ; j<len/2 ; j++,i--)
  {
	char temp = *(pointer+j);
	*(pointer+j) = *(pointer+i-1);
	*(pointer+i-1) = temp;
  }
}

int main(void) 
{
 char str[]="Hello";
 printf("start string %s \n",str);
 revrse(&str);
 printf("final string %s \n",str);
 return 0;

}