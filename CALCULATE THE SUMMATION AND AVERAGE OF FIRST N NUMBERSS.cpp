#include<stdio.h>
int main()
{
	int i,n,sum=0;
	float avg;
	printf("ENYTER A POSITIVE INTEGER NUMBER: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	avg=(float)sum/n;
	printf("THE SUMMATION OF FIRST %d NATURAL NUMBER IS %d\n :",n,sum);
	printf("THE AVERAGE OF FIRST %d NATURAL NUMBER IS %.2f : ",n,avg);
	return 0;
}
