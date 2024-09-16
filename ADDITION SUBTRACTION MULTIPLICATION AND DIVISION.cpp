#include<stdio.h>
int main()
{
	int a,b,add,sub,mul;
	float div;
	printf("ENTER A INTEGER NUMBER:  ");
	scanf("%d",&a);
	printf("\nEnter another integer number: ");
	scanf("%d",&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("\nTHE ADDITION OF TWO NUMBER= %d ",add);
	printf("\nTHE SUBTRACTION OF TWO NUMBER= %d ",sub);
	printf("\nTHE MULTIPLICATION OF TWO NUMBER = %d ",mul);
	printf("\nTHE DIVISION OF TEO NUMBER=%.2f",div);
	return 0;
	
}
