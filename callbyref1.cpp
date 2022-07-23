// demonstration of call by reference
#include<stdio.h>
void update(int *a);

int main()
{
	int a = 100;
	printf("\n inside main function: \n a = %d",a);
	update(&a);
	printf("\n inside main function: \n a = %d",a);
	return 0;
}

void update(int *a)
{
	printf("\n value of a in update function:\n a = %d",*a);
	*a = *a + 50;
	printf("\n updated value of a in update function: \n a = %d",*a);
}
