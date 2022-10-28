#include "main.h"
/**
 * print_alphabet - print letter s of the alphabet in lower case
 * Return 0 on Success
 */
void print_alphabet(void)
{
char ch;
while (ch >= 'a' && ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
