#include <stdio.h>

/**
 * main - prints all number in base 16 lowercase
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		}

	for (i = 97; i  <= 103; i++)
	{
		putchar(i);
		}
	putchar('\n');
	return (0);
}

