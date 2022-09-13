#include "main.h"
/**
* print_alphabet - entry point for the program
* Description: Print lowercase alphabets
* to the standard output
* Return: 0 (success)
*/

void print_alphabet(void)
{
int i;
for (i = 'a'; i < 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}