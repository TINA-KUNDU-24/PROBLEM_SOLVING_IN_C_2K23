#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	
	printf("ENTER THE TEMPERATURE IN CELSIUS: ");
	scanf("%f",&celsius);
	
	fahrenheit=(1.8 *celsius)+32;
	printf("\nTEMPERATURE IN FAHRENHEIT: %f",fahrenheit);
	
	return 0;
}
