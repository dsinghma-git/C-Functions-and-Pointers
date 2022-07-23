// array and pointer
// array name is a constant pointer. it points to the base address of array.
#include<stdio.h>
int main()
{
	int a[10] = {10,3,5,6,4,60,7,50,20,15};
	
   //	printf("\n a = %d",a);
	//printf("\n address of a[0]= %d",&a[0]);
	printf("\n Arrray elements are:\n ");
	for(int i = 0;i<10;i++)
		printf("%d\t ", *(a+i));
		
	return 0;	
}
