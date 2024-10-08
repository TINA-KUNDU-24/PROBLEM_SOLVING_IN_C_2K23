#include <stdio.h>
int main()
{
for (int i = 1; i <= 10; i++)
{
if (i == 1 || i == 10)
{
for (int j = 1; j <= 10; j++)
printf(" *");
printf("\n");
continue;
}
printf(" * ");
for (int i = 1; i <= 16; i++)
printf(" ");
printf("*");
printf("\n");
}
}

