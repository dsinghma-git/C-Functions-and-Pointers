// labsheet 8b
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,s=0;
	printf("Enter how many elements to store in array ");
	scanf("%d",&n);
	int *a = (int*) malloc(n*sizeof(int));
	
	printf("Enter %d numbers ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i); // scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s= s + *(a+i);  // s = s+ a[i];
	}
	printf("\n Sum of all elements = %d",s);
	return 0;
}
