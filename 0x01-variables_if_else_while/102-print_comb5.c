#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print combinition of two two digit numbers'
 * Return: Always 0
 */
int main(void)
{
	int n, m;

	for (n = 0; n <= 99; n++)
	{
		for (m = 0; m <= 99; m++)
		{
			if (n < m && n != m)
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				putchar(' ');
				putchar((m / 10) + '0');
				putchar((m % 10) + '0');
				if (n != 98 || m != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
