#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all possible combinations
 * Return: 0
*/
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		puchar(c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
