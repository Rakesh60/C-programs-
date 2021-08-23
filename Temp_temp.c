#include<stdio.h>

int main()
{
	float temp_cels;
	float temp_fahr;
	printf("Enter temparature in Celsius:");
	scanf("%f",&temp_cels);
	temp_fahr = (temp_cels*1.8)+32;
	printf("Temprature in Fahrenite:%f",temp_fahr);
}
