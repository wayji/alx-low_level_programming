#include "main.h"
#include <limits.h>
/**
 * reset_to_98 - takes a pointer and updates the value it point to
 * @n: pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
*a = 42;
*b = 98;
a = INT_MAX;
b = INT_MIN;
}