#include<stdio.h>
int main()
{
	int i,j,num;

	printf("enter a number:"); 
	scanf("%d",&num);
	for( i=1;i<=num;i++)
	{
		for( j=1;j<=i;j++)
		printf("%c",'*');
		printf("\n");
	}
	return 0;
}

