#include<stdio.h>
int main()
{
	int num,i, original_num,fact,sum=0;
	printf("enter an integer: ");
	scanf("%d",&num);
	original_num=num;
	while(num>0)
	{
		fact=1;
		i=1;
		while(i<=num%10)
		{
			fact*=i;
			i++;
		}
		sum+=fact;
		num/=10;
	}
	if (original_num==sum)
	{
		printf("%d is a strong number",original_num);
		
	}
	else
	printf("%d is not a strong number",original_num);
	return 0;
}
