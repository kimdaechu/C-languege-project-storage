#include <stdio.h>

int main()
{
	int a, b, c, d;
	printf("4수를 입력해 주세요\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	printf("4수의 합은 %d 입니다\n", a + b + c + d);
	printf("4수의 평균은 %d 입니다\n", (a + b + c + d) / 4);
	return 0;
}
