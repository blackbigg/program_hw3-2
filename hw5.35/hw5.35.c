#include <stdio.h>
#include <stdlib.h>

unsigned long long int Fibonacci(unsigned int);

void main()
{
	unsigned long long int max= ULLONG_MAX;
	unsigned int n;

	printf("��J�Ʀrn�L�X��n�쪺���i������:"); 
	scanf("%u", &n);
	printf("��%u�쪺�Ʀr��%llu\n",n,Fibonacci(n));
	unsigned int k=99;

	printf("�ү��̤ܳj�Ʀr��\t%llu\n�̦h�����%u��ƭȬ�\t%llu\n",max, k,Fibonacci(k));
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