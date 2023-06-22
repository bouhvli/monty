#include <stdio.h>

void contobrainfuck(const char *string)
{
	char c;
	int i = 0;

	while (*string)
	{
		c = *string;
		printf("+++++++++[>+++++++++>-]>");
		while (i < c)
		{
			printf("+");
			i++;
		}
		printf(".");
		string++;
	}
}
int main()
{
	const char *string = "School";

	contobrainfuck(string);
}
