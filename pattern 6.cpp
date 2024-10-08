#include <stdio.h>
int main()
{
char ch = 'A';
for (int i = 1; i <= 5; i++)
{
char c = ch;
for (int j = 1; j <= i; j++)
printf("%c ", c--);
ch++;
printf("\n");
}
 return 0; 
}

