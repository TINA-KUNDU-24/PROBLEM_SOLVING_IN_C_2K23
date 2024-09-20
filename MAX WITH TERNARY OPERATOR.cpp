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
	
	max=(num1>num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3);
	
	printf("MAXIMUUM NUMBER IS=%d",max);
	return 0;
}
