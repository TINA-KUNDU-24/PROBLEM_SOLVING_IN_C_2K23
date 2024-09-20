#include<stdio.h>
int main()
{
	int num;
	printf("ENTER AN INTEGER NUMBER: ");
	scanf("%d",&num);
	
	if(num%2==0)
	printf("%d IS AN EVEN NUMBER..",num);
	else
	printf("%d US AN ODD NUMBER..",num);
	
	return 0;
}
