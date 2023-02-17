#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		x++;
		if (x != 10) 
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
