#include<stdio.h>
int main()
{
	int a,b,c;
	float avg;
	printf("ENTER THE NUMBER 1: ");
	scanf("%d",&a);
	printf("ENTER THE NUMBER 2: ");
	scanf("%d",&b);
	printf("ENTER THE NUMBER 3: ");
	scanf("%d",&c);
	
	avg=a+b+c/3.0;
	printf("%.3f is the average of three numbers..",avg);
	return 0;
	
	
	
}
