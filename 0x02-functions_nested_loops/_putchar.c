#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - writed the char c to std out
 * @c: character to be printed
 * Return: 1 on success
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
