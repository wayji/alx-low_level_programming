#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
char letter;
letter = 'A';
while (letter <= 'Z')
{ 
letter++;
}
if (c == letter)
{
c = 1;
}
else
{
c = 0;
}
return (c);
}
