#include <stdlib.h>
#include <stdio.h>

int* max(int *first_num, int *second_num)
{
	if(*first_num > *second_num)
	{
		return first_num;
	}
	else
	{
    	return second_num;
	}
}

int main(void)
{
int first_number = 0;
int second_number = 0;
int *first_number_P = &first_number;
int *second_number_P = &second_number;
printf("first_number \n");
scanf("%d",first_number_P);
printf("second_number \n");
scanf("%d",second_number_P);
printf("max %d \n",*max(first_number_P, second_number_P));
}