#include <stdio.h>
#include <stdlib.h>

int LCM(int,int);
int GCD(int,int);

void main()
{
    int a, b;
    printf("��J�Ʀr a b:");
    scanf("%d %d", &a, &b);
    printf("�̤p������:%d\n",LCM(a,b));
	system("pause");
}
int GCD(int m, int n) {
    while (n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }
    return m;
}

int LCM(int m, int n) {
    return m * n / GCD(m, n);
}