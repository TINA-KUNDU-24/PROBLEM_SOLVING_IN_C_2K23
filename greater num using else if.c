#include<stdio.h>
int main()
{
    int a, b,c, result;
printf ("1st no: ");
scanf("%d",&a);
printf("2nd no: ");
scanf("%d",& b);
printf ("3rd no: ");
scanf("%d",&c);
if(a>b&&a>c)
printf("1st no is greater");
else if(b>a&&b>c)
printf("2nd no is greater");
else
printf("3rd no is greater");
return 0;

}