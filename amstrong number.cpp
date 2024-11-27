//amstrong number
#include<stdio.h>
int main()
{
 int num,mult,temp,sum=0,r;
 printf("enter a number:");
 scanf("%d",&num);
 temp=num;
 while(num>0)
 {
 	r=num%10;
 	mult=r*r*r;
 	sum=sum+mult;
 	num=num/10;
 }
 if(temp=mult)
	printf("number is armstrong");
	else
	printf("number is not armstrong");
	return 0;
 	
}
