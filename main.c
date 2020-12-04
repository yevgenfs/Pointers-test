#include <stdlib.h>
#include <stdio.h>
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