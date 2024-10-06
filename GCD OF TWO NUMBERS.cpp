


#include<stdio.h>
int main()
{
	int num1,num2,gcd,remainder;
	printf("Enter a positive integers: ");
	scanf("%d",&num1);
	printf("Enter another positive integers: ");
	scanf("%d",&num2);
	while (num2!=0)
	{
		remainder=num1%num2;
		num1=num2;
		num2=remainder;
	}
	
   
    gcd=num1;
    printf("GCD of %d and %d = %d",num2, num1,gcd);
    return  0;
}
