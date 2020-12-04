#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int lenght;
	printf("input lenght");
	scanf("%d", &lenght);
	printf("lenght - %d  \n", lenght);
	int array[lenght];
	int *ptr = malloc(sizeof(array));

	for(int i = 0; i < lenght; i++)
	{
	  printf("input number %d \n", i);
	  scanf("%d",(ptr+i));
	  printf("element - %d : %d \n", i, *(ptr+i));
	}

	for(int i = 0; i < lenght - 1; i++)
	{
		for(int j = 0; j < lenght - i -1; j++)
		{
			if (*(ptr+j) > *(ptr+j+1))
			{
				int swap   = *(ptr+j);
				*(ptr+j)   = *(ptr+j+1);
				*(ptr+j+1) = swap;
			}
		}
	}

	printf("sorted array \n");

	for (int i = 0; i < lenght; i++)
	{
		printf("element - %d : %d \n", i, *(ptr+i));
	}

	printf("The Largest element is - %d  \n", *(ptr + (lenght - 1)));
}
