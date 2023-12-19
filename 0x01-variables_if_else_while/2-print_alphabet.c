#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all aplhabet
 *
 * Return: Always 0 (sccess)
 */

int main(void)

	char ch = 'a';

	while (ch <= 'z')
	{
        	putchar(ch);
        	ch++
	}
    	putchar('\n');
    	return (0);
