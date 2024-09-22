#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,root1,root2,d;
	printf("ENTER THE VALUE OF A=");
	scanf("%lf",&a);
	printf("ENTER THE VALUE OF B=");
	scanf("%lf",&b);
	printf("ENTER THE VALUE OF C=");
	scanf("%lf",&c);
	
	d=b*b-4*a*c;
	if(d>0)
	{
		root1=-b+sqrt(d)/(2*a);
		root2=-b+sqrt(d)/(2*a);
		printf("THE REAL ROOTS=%lf and %lf",root1,root2);
	}
	else if(d==0)
	{
		root1=-b/(2*a);
		printf("ROOTS ARE EQUAL=%lf and %lf",root1,root1);
	}
	else
	printf("ROOTS ARE IMAGINARY..");
	return 0;
	
}
