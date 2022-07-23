/* Write a program to generate first n terms of Fibonacci series 
   using recursive function to return Nth term of series. */
#include<stdio.h>
int fib(int n);
int main()
{
	int n,f;
	printf("Enter  a number ");
	scanf("%d",&n);
	f=fib(n);
	printf("\n %dth term of Fibonacci series = %d",n,f);
	return 0;
}
int fib(int n)
{
	if(n==1 || n==2)
		return 1;
	else
		return fib(n-1) + fib(n-2);
}

