#include "main.h"
/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: Always zero
 */
void print_alpabet(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

_putchar('\n');
}
