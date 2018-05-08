#include <stdio.h>

int main(void)
{
	int i, n, m, gcd;
	printf("두개의 정수를 입력하시오.:");
	scanf("%d,%d", &n, &m);
	for (i = 1; i <= n && i <= m; i++) {
		if (n%i == 0 && m%i == 0) {
			gcd = i;

		}
	}
	printf("%d,%d의 최대공약수는 %d입니다.\n", n, m, gcd);
	return 0;
}