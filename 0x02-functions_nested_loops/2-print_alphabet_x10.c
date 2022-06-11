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

while (r <= 9)
{
letter = 'a';
while (letter <= 'z') 
{
_putchar(letter);
letter++;
}
_putchar('\n');
r++;
}
}
