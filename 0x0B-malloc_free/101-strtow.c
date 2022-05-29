#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - concatenates all the arguments
 * @str: string
 * @av: arguments
 * Return: a pointer to a new string
 */
char **strtow(char *str)
{
	int i, w, j, k, count, m, wordf;
	char **p;
	char *x;

	w = 0;
	j = 0;
	i = 0;
	count = 0;
	if (*str =='\0' || str == NULL)
		return (NULL)
