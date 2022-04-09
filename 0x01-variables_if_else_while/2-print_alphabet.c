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
	signed char x;
	int n;

	for (n = 97; n <= 122; n++)
	{
	x = n;
	printf("%c", x);
	if (n == 122)
	{
	printf("\n");
	}
	return (0)
}
