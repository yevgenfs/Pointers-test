#include <stdlib.h>
#include <stdio.h>

void swap (int *first, int *second)
{
	int swaper = *first;
	*first     = *second;
	*second    = swaper;
}

int main(void)
{
	int f = 12;
	int s = 0;
	swap(&f, &s);
	printf("first = %d second = %d \n", f, s);
}
