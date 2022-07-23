// Write a program to find factorial of a number using function.
#include<stdio.h>

int factorial(int n);
int main()
{
	int n,f;
	printf("Enter a number ");
	scanf("%d",&n);
	f = factorial(n);
	printf("\n Factorial of %d = %d",n,f);
	return 0;	
}

int factorial(int n)
{
	int f=1;
	for(int i=1;i<=n;i++)
		f=f*i;
	return f;
}

