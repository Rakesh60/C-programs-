#include<stdio.h>

int main()
{
	int no1,no2;
	float result;
	char op;
	printf("Enter 2 Nos:");
	scanf("%d%d",&no1,&no2);
	printf("Which operation you want to perform:");
	scanf(" %c",&op);
	switch(op)
	{
		case '+': 
				result=no1+no2;
				break; 
		case '-':
				result=no1-no2;
				break;
		case '*':
				result=no1*no2;
				break;
		case '/':
				result=no1/no2;
				break;
		default:
				printf("Wrong Operation");
	}
	printf("\n Result = %f",result);
}
