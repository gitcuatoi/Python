/*
1. Given an array of strings, find the longest common prefix of all element.
 ________________________________________________
| Input: abc abd abf                             |
| Output: ab                                     |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#define SIZE 1000

void Ex1(char *str[], int n)
{
	//your codes here
	int i = 0;
	while (str[0][i] != '\0')
	{
		int result = 0;
		for (int j = 1; j < n; j++)
			if (str[0][i] != str[j][i] || str[j][i] == '\0')
				result = 1;

		if (result)
			break;
		else
			printf("%c", str[0][i]);

		i++;
	}
}

int main(int argc, char *argv[])
{
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	char *testcase[argc];
	int i;
	for (i = 0; i < argc; i++)
	{
		testcase[i] = argv[i + 1];
	}

	Ex1(testcase, argc);

	return 0;
}
