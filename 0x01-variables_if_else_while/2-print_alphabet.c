#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Entry point
 *
 * Result: Always 0 (success)
 */
int main(void)
{
	for(int x = 'A'; x <= 'Z'; x++)
	{
		int lower_x = tolower(x);
		putchar(lower_x);
	}
	return (0);
}
