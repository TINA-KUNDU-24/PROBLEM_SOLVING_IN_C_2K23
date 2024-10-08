#include <stdio.h>
int main()
{
int k = 1;
for (int i = 1; i <= 5; i++)
{
if (i != 5)
k++;
for (int j = 1; j <= i; j++)
printf("*");
for (int j = 5; j > i + 1; j--)
printf(" ");
for (int j = 5; j > i; j--)
printf(" ");
for (int j = 1; j < k; j++)
{
printf("*");
}
printf("\n");
}
}

