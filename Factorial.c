#include <stdio.h>

int Factorial(int n);

void main()
{
	int n;
	printf("Enter a number to calculate the factorial\n");
	
	scanf("%d",&n);
	
	printf("The factorial of %d is %d\n",n,Factorial(n));
}

int Factorial(int n)
{
	if(n<0)
	{
		return -1;
	} else if(n==0 || n==1) {
		return 1;
	}
 
	return (n * Factorial(n-1));
}
