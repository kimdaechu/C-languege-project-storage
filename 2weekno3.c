#include <stdio.h>

int main()
{
	int w, t, s;
	printf("시간당 임금을 적으세요\n");
	scanf("%d", &w);
	printf("작업시간을 적으세요\n");
	scanf("%d", &t);
	printf("고로 일급 액수는 %d 입니다\n", s = w * t);
	printf("시간당 임금은 %d 입니다\n",w);
	printf("작업시간은 %d 입니다\n", t);
	printf("일급 액수는 %d 입니다\n", s = w * t);
}