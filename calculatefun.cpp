// Calculate sum, difference, product and divison
#include<stdio.h>
int add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;
}

int div(int a, int b)
{
	return a/b;
}

int main()
{
	int num1, num2,s,dif, pr, q;
	printf("Enter two numbers ");
	scanf("%d%d",&num1,&num2);
	
	s = add(num1,num2);
	dif = sub(num1,num2);
	pr = mul(num1,num2);
	q = div(num1,num2);
	
	printf("\n Sum = %d \n Difference = %d\n product = %d\n Quotient = %d",s,dif,pr,q);
	return 0;
}
