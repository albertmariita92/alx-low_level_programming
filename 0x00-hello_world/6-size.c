#include <stdio.h>
/**
 * main -  A program that prints the size of various types on the computer it is compiled and run on
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("\nSize of a char: %ld  byte(s)\", (unassigned long)sizeof(a));
printf("\nSize of an int: %ld byte(s)\", (unassigned long)sizeof(b));
printf("\nSize of a long int: %ld byte(s)\", (unassigned long)sizeof(c));
printf("\nSize of a long long: %ld byte(s)\", (unassigned long)sizeof(d));
printf("/nSize of a float: %ld  byte(s)\", (unassigned long)sizeof(f));

retun (0);

}
