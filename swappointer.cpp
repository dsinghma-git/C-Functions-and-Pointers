#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int m = 10, n = 20;
    printf("m = %d\n", m);
    printf("n = %d\n\n", n);
    swap(&m, &n);    //passing address of m and n to the swap function
    printf("After Swapping:\n\n");
    printf("m = %d\n", m);
    printf("n = %d", n);
    return 0;
}
/*
    pointer 'a' and 'b' holds and 
    points to the address of 'm' and 'n'
*/
void swap(int *a, int *b) 
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

