#include <stdio.h>
int main()
{
for (int i = 5; i >= 1; i--)
{
for (int j = 5; j > i; j--)
printf(" ");
for (int j = i; j >= 1; j--)
printf("*");
for (int j = i - 1; j >= 1; j--)
printf("*");
printf("\n");
}
for (int i = 4; i >= 1; i--)
{
for (int k = 1; k < i; k++)
printf(" ");
for (int j = 5; j >= i; j--)
printf("*");
for (int j = 5; j > i; j--)
printf("*");
printf("\n");
}
}

