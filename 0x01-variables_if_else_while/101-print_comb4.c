#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print different combinitions of 3 digits'
 * Return: Always 0
 */
int main(void)
{
	int n = '0';
	int m = '0';
	int k = '0';

	while (n <= '7')
	{
		while (m <= '8')
		{
			while (k <= '9')
			{
				if (n < m && m < k)
				{
					putchar(n);
					putchar(m);
					putchar(k);
					if (! (n == '7' && m == '8' && k == '9'))
					{
					putchar(',');
					putchar(' ');
				  }
				}
				k++;
			}
			k = '0';
			m++;
		}
		m = '0';
		n++;
	}
	putchar('\n');
	return (0);
}

