#include<stdio.h>
int main()
{
	int num1,num2,num3,max;
	printf("ENTER 1ST NUMBER: ");
	scanf("%d",&num1);
	printf("ENTER 2ND NUMBER: ");
	scanf("%d",&num2);
	printf("ENTER 3RD NUMBER: ");
	scanf("%d",&num3);
	
	if(num1>num2)
	{
		if(num1>num3)
		max=num1;
		else
		max=num3;
	}
	else
	{
		if(num2>num3)
		max=num2;
		else
		max=num3;
	}
	

printf("MAXIMUM AMONG ALL THETHREE NUMBERS = %d",max);
return 0;
}
