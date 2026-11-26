#include<stdio.h>
int main()
{
int num = 25;
 int *ptr;

 ptr = &num;

 printf("Value of num = %d\n", num);
printf("Address of num = %p\n", (void *)&num);
printf("\nUsing Pointer:\n");
printf("Address stored in ptr = %p\n", (void *)ptr);
printf("Value pointed by ptr = %d\n", *ptr);

*ptr = 50;

printf("\nAfter changing value using pointer:\n");
printf("Value of num = %d\n", num);
return 0;
}

