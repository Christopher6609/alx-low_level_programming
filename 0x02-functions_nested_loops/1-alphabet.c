#include "main.h"
/**
 * print_alphabet - print letter s of the alphabet in lower case
 * Return 0 on Success
 */
void print_alphabet(void)
{
char ch;
for (ch >= 'a'; ch <= 'z'; ch++)
{
putchar(ch);
putchar('\n');
}
return (0);
}
