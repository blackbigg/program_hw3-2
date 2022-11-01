#include <stdio.h>
#include <stdlib.h>

unsigned long long int Fibonacci(unsigned int);

void main()
{
	unsigned long long int max= ULLONG_MAX;
	unsigned int n;

	printf("块计n材n创猧ê计:"); 
	scanf("%u", &n);
	printf("材%u计%llu\n",n,Fibonacci(n));
	unsigned int k=99;

	printf("┮ボ程计\t%llu\n程陪ボ%u计\t%llu\n",max, k,Fibonacci(k));
	system("pause");
}
unsigned long long int Fibonacci(unsigned int n)
{
	unsigned long long int sum = 0;
	unsigned long long int a1 = 1;
	unsigned long long int a2 = 0;
	unsigned long long int x;
	for (unsigned int i = 1; i <= n; i++)
	{


		sum =  a1 + a2;
		x = a2;
		a2 = a1 + a2;
		a1 = x;

	}
	return sum;

}