#include <stdio.h>
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
if(*first_number_P > *second_number_P)
{
    printf("first_number max %d \n",*first_number_P);
}
else if (*first_number_P == *second_number_P)
{
	printf("first_number and  second_number max  \n");
}
else
{
    printf("second_number max %d \n",*second_number_P);
}
}