#include <stdio.h>
int main(){
    int i, n, f=0;
printf ("enter a no :");
scanf("%d", & n);
for(i=2;i<n;i++)
{ if (n% i==0)
   {
       f=1;//jei number gulo prime noi seigulo tei modulo zero hbe
       break;
   }
}  
    if (f==0)
    printf("\n%d is prime no: ",n);
    else
    printf("\n%d is not prime no: ",n);
   return 0;
}










