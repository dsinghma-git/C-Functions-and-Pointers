// double pointer: a pointer that holds address of another pointer
#include<stdio.h>

int main()
{
	int a = 100;
	int *ptr = &a;
	int **dptr = &ptr;
	
	printf("\n Address in ptr = %d", ptr);
	printf("\n Address of ptr = %d",&ptr);
	printf("\n Address in dptr = %d",dptr);
	return 0;
}
