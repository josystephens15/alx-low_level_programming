#include <stdio.h>
/**
*main - prints all combination of two
*Return
 */

int main(void)
{
	int i, j;

	for (i = 10; i < 100; i++)
	{
	for (j = 10; j < 100; j++)
	{
	if (i < j)
	{
	putchar((i / 10) + 48);
	putchar((i % 10) + 48);
	putchar(' ');
	putchar((j / 10) + 48);
	putchar((j % 10) + 48);
	if (i != 98 || j != 99)

	{
	putchar(' , ');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
