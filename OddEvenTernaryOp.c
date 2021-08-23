#include<stdio.h>

int main()
{
	int no,result;
	printf("Enter a number:");
	scanf("%d",&no);
	result = no%2?1:0;
	if(result==1)
		printf("\n%d is Odd",no);
	else
		printf("\n%d is Even",no);
}
