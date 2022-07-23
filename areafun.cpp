// write a program to find surface area of a box using function
#include<stdio.h>
int findarea(int l, int b, int h); // function declaration or prototype
int main()
{
	int l, b,h, a;
	printf("Enter l, b and h ");
	scanf("%d%d%d",&l,&b,&h);
	a = findarea(l,b,h); // function call
	printf("\n Area = %d",a);
	return 0;	
}

int findarea(int l, int b,int h)
{
	int ar;
	ar = 2*(l*b+b*h+l*h);
	return ar;
}


