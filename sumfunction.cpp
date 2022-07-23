// to add two numbers using function
#include<stdio.h>
//prototype of function or function declaration
// It provides funtion name, return type and parameters required for the function.
// this information is provided to the compiler.
int add(int x, int y);

int main()
{
	int a,b,s;
	printf("Enter two numbers ");
	scanf("%d%d",&a,&b);
	s = add(a,b);  //2. function call: it calls the function to compute the task
	// It may pass data or may not pass.
	// The data passed to the function are written in the parenthesis in function call.
	printf("\n Sum = %d",s);
	return 0;
}
//3. function definition:
// It defines actual code of the function or statements to compute the task.
// it has return type, function name, and list of parameters to receive the data
// passed to it. It may return a computed value to the calling function using 
// return statement.

int add(int x, int y)
{
	int s;
	s = x + y;
	return s;
}



