#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void);
{
char let;
let = 'a';
while (let <= 'z')
{
putchar(let);
let++;
}
putchar('\n');
return;
}
