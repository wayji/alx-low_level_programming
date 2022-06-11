#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int r;
char letter;
r = 0;
letter = 'a';
while (r <= 9)
{
while (letter <= 'z') 
{
_putchar(letter);
letter++;
_putchar('\n');
}
r++;
}
}
