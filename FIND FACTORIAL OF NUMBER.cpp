#include<stdio.h>
int main()
{
	int num,i;
	int fact=1;
	printf("ENTER A POSITIVE INTEGER: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact*=i;
    }
	printf("FACTORIAL OF %d = %d ",num,fact);
	return 0;
}
