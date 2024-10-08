#include<stdio.h>
int main()
{
	int num,reverse=0,remainder;
	printf("ENTER AN INTEGER: ");
	scanf("%d",num);
	while(num!=0)
	{
		remainder=num%10;
		reverse=reverse*10+remainder;
		num/=10;
	}
	printf("REVERSE OF THE NUMBER = %d",reverse);
	return 0;
}
