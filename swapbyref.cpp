// Demo call by value
#include<stdio.h>
void swap(int *a, int *b);

int main()
{
	int a = 10, b=20;
	printf("Inside main function");
	printf("\n a = %d\t b =%d", a,b);
	printf("\n Address of a =%d \n address of b = %d",&a,&b);
	swap(&a, &b);
	printf("\nInside main function");
	printf("\n a = %d\t b =%d", a,b);
	return 0;
}

void swap(int *a, int *b)
{
	int t;
	printf("\n Inside swap function");
	printf("\n a = %d\t b =%d", a,b);
	t = *a;
	*a = *b;
	*b = t;
	printf("\n a = %d\t b =%d", *a,*b);
	
}

