#include <stdio.h>
int main()
{
int a, b, c, result;
printf ("1st no: ");
scanf("%d",&a);
printf("2nd no: ");
scanf("%d",& b);
printf("enter your choice(1/2/3/4): ");
scanf("%d", &c); 
switch (c)
{
case 1:
result=a+b;
printf("sum=%d",result);
    break;
    case 2:
result=a-b;
printf("sub=%d",result);
    break;

case 3:
result=a*b;
printf("mult=%d",result);
    break;

case 4:
result=a%b;
printf("div=%d",result);
    break;


default:
printf("choose between 1 to 4");
    break;
}
 return 0;
}
