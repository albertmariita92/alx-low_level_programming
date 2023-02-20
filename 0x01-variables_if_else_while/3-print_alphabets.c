#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets in both lower and upper cases
 *
 * Return: Always 0 (Success)
 */
int main(void)
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++
	}
	while (CH <= 'Z')
		CH++
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
