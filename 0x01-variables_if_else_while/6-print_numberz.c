#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: prints all single digit number of base 10
 * starting from 0,  followed by new line.
 * Return: 0
*/
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num);
		num++;
	}
	return (0);
	putchar('\n');
}
