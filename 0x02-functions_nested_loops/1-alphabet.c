#include "main.c"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
Print_alphabet();
return (0);
}
void Print_alphabet(void)
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
