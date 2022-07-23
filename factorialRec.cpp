//Write a program to find factorial of number using recursion.
#include<stdio.h>
int fact(int n);
int main()
{
	int n,f;
	printf("Enter  a number ");
	scanf("%d",&n);
	f=fact(n);
	printf("\n Factorial of given number %d = %d",n,f);
	return 0;
}

int fact(int n)
{
	if(n==1)
		return 1;
	else
		return n * fact(n-1);
}

