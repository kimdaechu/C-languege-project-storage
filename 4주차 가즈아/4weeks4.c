#include <stdio.h>

int main(void)
{
	int i, n, m, gcd;
	printf("�ΰ��� ������ �Է��Ͻÿ�.:");
	scanf("%d,%d", &n, &m);
	for (i = 1; i <= n && i <= m; i++) {
		if (n%i == 0 && m%i == 0) {
			gcd = i;

		}
	}
	printf("%d,%d�� �ִ������� %d�Դϴ�.\n", n, m, gcd);
	return 0;
}