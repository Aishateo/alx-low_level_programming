#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - mani block
 * Description: prints all single digit number of base 10
 * starting from 0,  followed by new line.
 * Return: 0
*/
int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
