#include<stdio.h>
int main()
{
    int a,c=0,i;//C IS A COUNTER VARIABLE
    printf("enter a number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
     if(a%i==0)
     c++;
    }
    if(c==2)
    printf("%d is a prime number",a);
    else
    printf("%d is a not prime number",a);
    return 0;
}