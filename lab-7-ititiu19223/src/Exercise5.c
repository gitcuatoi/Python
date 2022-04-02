/*
5. Consider a T9 phone keypad layout (i.e. numeric key 2 is also used to input a, b or c),
1 and 0 are considered empty characters. Write a program to input a series of keypads pressed
then output the possible combinations of letters.
Ex:
 ______________________________________
| Input: 36                            |
| Output: dm dn do em en eo fm fn fo   |
|______________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#define SIZE 1000

void print(char input[], int place, char string[])
{
	char current[100];
	static char keyboard[8][4] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

	int i = 0;

	while (keyboard[input[place] - 50][i] != '\0')
	{
		char temp[2];
		temp[0] = keyboard[input[place] - 50][i];
		strcpy(current, string);
		strcat(current, temp);
		if (input[place + 1] != '\0')
			print(input, place + 1, current);
		else
			printf("%s ", current);
		i++;
	}
}

void Ex5(char s[])
{
	//your codes here
	print(s, 0, "");
}

int main(int argc, char *argv[])
{
	char *s = argv[1];
	Ex5(s);
	return 0;
}
