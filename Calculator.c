#include <stdio.h>

void main()
{
 	float num1, num2, result=0;
	char op;
	
	printf("Enter two numbers\n");
	scanf("%f%f",&num1,&num2);
	
	printf("Enter the operation\n");
	scanf(" %c",&op);
	
	switch(op)
	{
		case '+':
			result = num1 + num2;
			break;
		
		case '-':
			result = num1 - num2;
			break;
		
		case '*':
			result = num1 * num2;
			break;
			
		case '/':
			if(num2!=0)
			{
				result = num1 / num2;
			} else {
				printf("Division by zero is not possible\n");
			}

		default:
			printf("Invalid input\n");
	}
				       
	printf("%.2f %c %.2f = %.2f\n",num1,op,num2,result);
}
