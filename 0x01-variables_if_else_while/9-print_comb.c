#include <stdio.h>
int main(void)
{
int i;
for (i =48; i < 58; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
return (0);
}
