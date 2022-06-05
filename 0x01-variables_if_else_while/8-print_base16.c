#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
int g;
for (i = 48; i < 58; i++)
{
putchar(i);
}
for (g = 'a'; g <= 'f' ; g++)
{
putchar(g);
}
putchar('\n');
return (0);
}
