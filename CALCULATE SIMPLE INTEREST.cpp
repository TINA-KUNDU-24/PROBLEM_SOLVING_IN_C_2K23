#include<stdio.h>
int main()
{
	float principal,rate,time,interest;
	printf("ENTER THE PRINCIPLE: ");
	scanf("%f",&principal);
	printf("ENTER THE RATE: ");
	scanf("%f",&rate);
	printf("ENTER THE TIME: ");
	scanf("%f",&time);
	
	interest=principal*rate*time/100;
	printf("THE SIMPLE INTEREST IS %f",interest);
	return 0;
}
