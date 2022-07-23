// Write a program to find volume of a box using function.
#include<stdio.h>

float findVol(float l, float b, float h)
{
	return l * b * h;
}

int main()
{
	float l, b,h,v;
	printf("Enter l, b and h ");
	scanf("%f%f%f",&l,&b,&h);
	v = findVol(l,b,h);
	printf("\n Volume of the box: %f",v);
	return 0;
}


