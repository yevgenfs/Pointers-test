#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	char str[25]="Hello";
	char *ptr=str;
	int i = 0;
	int l = 0;
	while (*(ptr + i) != '\0')
	{
		i++;
		l++;
	}
	printf("lenght %d",l);
	
}