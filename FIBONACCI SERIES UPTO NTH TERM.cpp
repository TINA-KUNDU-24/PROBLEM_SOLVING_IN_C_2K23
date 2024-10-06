#include<stdio.h>
int main()
{
	int num,i,t1=0,t2=1,nextterm;
	printf("ENTER THE NUMBER OF TERMS: ");
	scanf("%d",&num);
	printf("fibonacci series: ");
	for(i=0;i<=num;i++)
	{
		printf("  %d",t1);
		nextterm=t1+t2;
		t1=t2;
		t2=nextterm;
	}
	return 0;
}
