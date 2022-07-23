// write a program to find product of two numbers using function.
#include<stdio.h>
int multiply(int a, int b);

int main()
{
	int a, b, p;
	printf("Enter two numbers ");
	scanf("%d%d",&a,&b);
	p = multiply(a,b);
	printf("\n Product = %d",p);
	return 0;
}

int multiply(int a, int b)
{
	int p;
	p = a *b;
	return p;
}
