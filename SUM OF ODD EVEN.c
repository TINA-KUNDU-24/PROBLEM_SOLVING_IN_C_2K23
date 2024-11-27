#include <stdio.h>
int main(){
int a,b,c,i,se=0,so=0;
printf("1st nos :" );
scanf("%d",&a);
printf("2nd nos :" );
scanf("%d",&b);
for(i=a;i<=b;i++)
{
    if(i % 2 == 0)
    {
         printf("\neven no is %d",i);
         se+=i;
    }
    else
    {
      printf("\nodd no is %d",i);
         so+=i;   
    }
}
printf("\ntotal sum of even nos is %d", se);
printf("\ntotal sum of odd nos is %d", so);
return 0;
}
