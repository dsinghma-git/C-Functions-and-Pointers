
// pointer demo
#include<stdio.h>

int main()
{
	int *p; // pointer declaration
	int x = 100;
	p = &x;  // pointer initialization
	
	printf("\n address of x = %d",&x);
	printf("\n value of x = %d",x);
	
	printf("\n value in p:  %d", p);
	printf("\n value =%d",*p);
		
	return 0;	
	
}
