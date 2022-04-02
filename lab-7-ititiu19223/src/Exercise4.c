/*
4. Receive 2 binary numbers using string then return the sum of those two.
Result should use string.
Ex:
 __________________________________________________________
| Input:  111 11                                           |
| Output: 1010                                             |
|__________________________________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#define SIZE 1000

void Ex4(char s1[], char s2[])
{
	//your codes here
	int i = 0, j = 0;

	while (s1[i++] != '\0')
		;
	while (s2[j++] != '\0')
		;

	i -= 2;
	j -= 2;

	int add = 0, res = 0, place = 0;

	while (i > -1 || j > -1)
	{
		int current1 = i < 0 ? 0 : s1[i] - 48;
		int current2 = j < 0 ? 0 : s2[j] - 48;

		res += (current1 + current2 + add) % 2 * pow(10, place++);

		i--;
		j--;

		if (current1 + current2 + add > 1)
			add = 1;
		else
			add = 0;
	}

	if (add)
		res += pow(10, place);

	printf("%d", res);
}

int main(int argc, char *argv[])
{
	char *n1 = argv[1];
	char *n2 = argv[2];

	Ex4(n1, n2);

	return 0;
}
