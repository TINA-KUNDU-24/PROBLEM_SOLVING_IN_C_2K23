#include<stdio.h>
int main()
{
	int num1,num2,temp;
	printf("ENTER THE 1ST NUMBER: ");
	scanf("%d",&num1);
	printf("ENETR THE 2ND NUMBER: ");
	scanf("%d",&num2);
	
	printf("TWO NUMBERS AFTER SWAPPING:%d %d ",num1,num2);
	
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	
	printf("\nTWO NUMBERS BEFORE SWAPPING:%d %d",num1,num2);
	return 0;
}
