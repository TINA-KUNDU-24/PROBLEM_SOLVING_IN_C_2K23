//reverse a number
#include<stdio.h>
int main()
{
	int num,num1,r,sum=0;
	printf("Enter a number: ");
	scanf("%d",&num);
    num1=num;
    while(num>0)
    {
    	r=num%10;
    	sum=sum*10+r;
    	num=num/10;
	}
	printf("reverse num %d",sum);
	if(sum==num1)
	printf("number is palindrome");
	else
	printf("number is not palindrome");
	return 0;
	
}
