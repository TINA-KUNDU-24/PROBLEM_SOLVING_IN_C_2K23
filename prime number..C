#include<stdio.h>
int main()
{
    int a,b,i,j,num,f;//FLAG IS A VARIABLE
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    
    for(i=a;i<=b;i++)
    {
    	f=0;
        for(j=2;j<i;j++)
{   if (i%j==0)
   {
       f=1;
       break;
   }
}  
    if (f==0)
    printf("\n%d is a prime number..",i);
    else 
    printf("\n%d is not a prime number.. ",i);
    } 
    return 0;
}
