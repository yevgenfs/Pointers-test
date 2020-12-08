#include <stdlib.h>
#include <stdio.h>

#define MAX_NAME_LENGHT 28

/* *
 * @brief program in C to show the usage of pointer to structure , union and 
 * program in C to show a pointer to an array which contents are pointer to structure
 * */
typedef struct 
{
  char name[MAX_NAME_LENGHT];	
}user_t;

typedef union 
{
  char name[MAX_NAME_LENGHT];	
}names_t;

int main(void)
{
  user_t   users              = {"John Alter from Court Street"};
  user_t   admin              = {"Yevhen from Court Street"};
  user_t   *ptr               = &users;
  user_t   *ptr_d             = &admin;
  names_t  name               = {"Jhon Mc Jhon Mc  "};
  names_t  *u_ptr             = &name;
  user_t   *array[2]          = {ptr,ptr_d};
  user_t   (*(*array_ptr)[2]) = &array;

  printf("pointer %s \n", ptr->name);
  printf("union %s \n", u_ptr->name);
  printf("array_ptr %s", (*(*array_ptr+1))->name);
}