#include "main.h"
#include <stdio.h>

/**
 * _putchar - write the statement in c
 * @c: the character to be printed
 *
 * Return: On success is 1
 * on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
