#include<stdio.h>
int main()
{
	int num,reverse_num=0,remainder,original_num;
	printf("enter an integer number:");
	scanf("%d",&num);
	
	original_num=num;
	while(num!=0)
	{
		remainder=num%10;
		reverse_num=reverse_num*10+remainder;
		num/=10;
	}
	if(original_num==reverse_num)
	printf("%d is a palindrome number..",original_num);
	else
	printf("%d is not an palindrome number..",original_num);
	return 0;
}
