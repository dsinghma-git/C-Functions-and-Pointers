//lab7d  WAP to reverse a number.
#include<stdio.h>

int findReverse(int n);

int main()
{
	int n,rev;
	printf("Enter a number ");
	scanf("%d",&n);
	rev= findReverse(n);
	printf("\n Reverse of given number %d = %d",n,rev);
	return 0;	
}

int findReverse(int n)
{
	int d, re = 0;
	while(n>0)
	{
		d = n % 10;
		re = re * 10 + d;
		n = n/10;
	}
	return re;
}
