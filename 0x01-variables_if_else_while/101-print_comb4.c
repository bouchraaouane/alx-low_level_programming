#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e, k;

	i = 48;
	e = 48;
	k = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			k = 48;
			while (k < 58)
			{
				if (e != i && e != k && i != k && e < i && i < k)
				{
					putchar(e);
					putchar(i);
					putchar(k);
					if (i == 56 && e == 55 && k == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
