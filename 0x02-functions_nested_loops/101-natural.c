#include <stdio.h>
/**
 * main - Entry point of the program
 * Description: sums the natural numbers below
 * @n that is divisible by both 5 and 3
 * Return: 0 (success)
 */
int main(void)
{
int i, n, sum;
n = 1024;
for (i = 1; i < n; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
sum += i;
}
}
printf("%d", sum);
printf("\n");
return (0);
}
