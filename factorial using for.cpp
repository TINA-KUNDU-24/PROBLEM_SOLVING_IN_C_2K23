#include<stdio.h>
int main()
{
	int num,fact,i;
	printf("enter a number:");
	scanf("%d",&num);
	fact=1;
	if(num==0)
	printf("factorial of 0=1");
	else
	{
	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d=%d",num,fact);
    }
	return 0;
}
