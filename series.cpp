#include<stdio.h>
int main()
{
	int i,num,sum=0,r;
	printf("enter a number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		r=i*i;
		printf("%d ",r);
		sum=sum+r;
	}
	printf("result= %d",sum);
	return 0;
	
}
