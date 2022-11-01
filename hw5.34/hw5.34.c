#include <stdio.h>
#include <stdlib.h>

int powercal(int, int);
void main()
{
	int base, exponent;
	printf("input base and exponent:");
	scanf("%d %d", &base, &exponent);
	printf("%d\n",powercal(base, exponent));
	system("pause");
}
int powercal(int base, int e)
{
	if (e == 1)
	{
		return base;
	}
	else
	{
		return base * powercal(base, e - 1);
	}

}