#include <stdio.h>
#include <stdlib.h>

void hanoi(int, char, char, char);

void main()
{
	int n;
	printf("請輸入盤數：");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');

	system("pause");
}
void hanoi(int n, char A, char B, char C)
{
	if (n == 1) {
		printf("把 %c 柱最上方的圓盤移到 %c 柱\n", A, C);
	}
	else {
		hanoi(n - 1, A, C, B);
		hanoi(1, A, B, C);
		hanoi(n - 1, B, A, C);
	}
}