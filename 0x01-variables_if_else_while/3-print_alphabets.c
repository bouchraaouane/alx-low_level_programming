
#include <stdio.h>

/**
 * main - Prints the alphabet in both cases.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char ALP[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	for (j = 0; j < 26; j++)
	{
		putchar(ALP[j]);
	}
	putchar('\n');
	return (0);
}
