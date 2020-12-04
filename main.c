#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int lenght ;
	printf("input lenght");
	scanf("%d", &lenght);
	printf("lenght - %d  \n", lenght);
	int array[lenght];
	int *ptr = array;
	int sum = 0;

	for(int i = 0; i < lenght; i++)
	{
		printf("input number %d \n", i);
		scanf("%d", (ptr+i));
		printf("element - %d : %d \n", i, *(ptr+i));
		sum +=  *(ptr+i);
	}

	printf("sum = %d  \n", sum);
}