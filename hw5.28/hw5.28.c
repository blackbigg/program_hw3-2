#include <stdio.h>
#include <stdlib.h>

char casechange(char);

void main()
{
	char input;
	printf("¿é¤J­^¤å¦r¥À:");
	scanf("%c",&input);
	printf("%c\n", casechange(input));

	system("pause");
}
char casechange(char x)
{
	if (x <= 90 && x >= 65)
	{
		return x + 32;
	}
	if (x <= 122 & x >= 97)
	{
		return x - 32;
	}
}