#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character tto print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is there retured
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
