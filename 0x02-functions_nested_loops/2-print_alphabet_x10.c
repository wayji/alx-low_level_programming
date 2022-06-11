#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int r;
r = 0;
char letter;
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
