#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;

	while (x < 9)
	{
		int y = x + 1;

		while (y <= 9)
		{
			putchar(x);
			putchar(y);
			putchar(',');
			putchar(' ');
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
