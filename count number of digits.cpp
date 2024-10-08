#include<stdio.h>
int main()
{
	int num,count=-1;
	printf("ENTER AN INTEGER: ");
	scanf("%d",num);
	while(num!=0)
	{
		count++;
		num/=10;
	}
	printf("number of digits: %d",count);
	return 0;
}

