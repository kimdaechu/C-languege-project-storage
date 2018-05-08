#include <stdio.h>

int main(void)
{
	int i, j, m;
	scanf("%d %d", &i, &j);
	if (i > j) {
		for (j = j; j <= i; j++) {
			for (m = 1; m < 10; m++) {
				printf("%d %d´Â %d\n", j, m, j*m);
			}
		}
	}
	else {
		for (i = i; i <= j; i++) {
			for (m = 1; m < 10; m++) {
				printf("%d %d´Â %d\n", i, m, i*m);
			}
		}
	}
	return 0;
}