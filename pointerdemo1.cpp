//demonstration of pointer
#include<stdio.h>

int main()
{
	double a = 100;
	double *ptr = &a;
	double b = 20;
//	printf("\n Address of a = %d",&a); // & address operator
	printf("\nAddress in ptr = %d",ptr);
	//printf("\n value of a = %d", a);
	//printf("\n value of a = %d",*ptr); // * value operator
	ptr = &b;
	
	ptr++;
	printf("\n value in ptr = %d",ptr);
   	ptr = ptr + 2;
	printf("\n value in ptr = %d",ptr);  	
	return 0;
}
