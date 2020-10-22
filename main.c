#include <stdlib.h>
#include <stdio.h>
typedef struct 
{
  char name[28];	
}user;
typedef union 
{
  char name[28];	
}names;

int main(void)
{
	user users = {"John Alter from Court Street"};
	user admin = {"Yevhen from Court Street"};
	user *ptr = &users;
	user *ptr_d = &admin;
	names name = {"Jhon Mc Jhon Mc  "};
	names *u_ptr = &name;
	user *array[2] = {ptr,ptr_d};
	user (*(*array_ptr)[2]) = &array;
	printf("pointer %s \n",ptr->name);
	printf("union %s \n",u_ptr->name);
	printf("array_ptr %s",(*(*array_ptr+1))->name);
}