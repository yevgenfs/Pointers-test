#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char alph[26];
	char *ptr = alph;
	for(int i = 0; i < 26; i++)
	{
		*(ptr+i) = i + 'A';
	}
	
	for(int i = 0; i < 26; i++)
	{
		printf("%c ",*(ptr+i));
	}
}