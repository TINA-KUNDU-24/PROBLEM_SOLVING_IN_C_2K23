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
if(a>b)
{
    if(a>c)
    printf("no 1 is greater");
    else
    printf("no 3 is greater");
}
else
{
    if(b>a)
    printf("no 2 is greater");
    else
    printf("no 3 is greater");

}
return 0;
}