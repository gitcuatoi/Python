/*
3. Receive 2 complex numbers using string then return a string
that represent the product of those two. Result should use string.
Complex number has the form of a+bi (i2 = -1, b can be negative or positive)
Ex:
 __________________________________________________________
| Input: 3+2i 3+2i                                         |
| Output: 5+12i                                            |
|__________________________________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#define SIZE 1000

int numberize(char c)
{
	return c - 48;
}

int sign(char c)
{
	switch (c)
	{
	case '+':
		return 1;
	case '-':
		return -1;
	}
}
void Ex3(char s1[], char s2[])
{
	//your codes here
	int a = 0, b = 0;
	int real1, real2;

	if (s1[0] == '-')
	{
		a = 1;
		real1 = -numberize(s1[1]);
	}
	else
		real1 = numberize(s1[0]);

	if (s2[0] == '-')
	{
		b = 1;
		real2 = -numberize(s2[1]);
	}
	else
		real2 = numberize(s2[0]);

	int irr1 = numberize(s1[a + 2]),
		irr2 = numberize(s2[b + 2]);

	if (s1[a + 1] == '-')
		irr1 = -numberize(s1[a + 2]);

	if (s2[b + 1] == '-')
		irr2 = -numberize(s2[b + 2]);

	printf("%d", real1 * real2 - irr1 * irr2);

	int temp = real1 * irr2 + real2 * irr1;

	if (temp != 0)
	{
		if (temp > 0)
			printf("+");

		printf("%di", temp);
	}
}

int main(int argc, char *argv[])
{
	char *n1 = argv[1];
	char *n2 = argv[2];

	Ex3(n1, n2);

	return 0;
}
