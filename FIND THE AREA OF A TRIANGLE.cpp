#include<stdio.h>
int main()
{
	float a,b,c,perimeter,semiperimeter,area;
	printf("ENTER THE THREE SIDES OF A TRIANGLE: ");
	scanf("%f  %f  %f",&a,&b,&c);
	
	perimeter=a+b+c;
	semiperimeter=perimeter/2.0;
	area=sqrt(semiperimeter*(semiperimeter-a)*(semiperimeter-b)*(semiperimeter-c));
	
	printf("PERIMETER OF THE TRIANGLE=%.2f",perimeter);
	printf("\nSEMIPERIMETER OF THE TRIANGLE=%.2f",semiperimeter);
	printf("\nAREA OF THE TRIANGLE=%.2f",area);
	return 0;
}
