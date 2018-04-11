#include <stdio.h>

int main()
{
	double a, b;
	printf("몸무게를 입력하세요(kg) : ");
	scanf("%lf", &a);
	printf("키를 입력하세요(m) : ");
	scanf("%lf", &b);
	printf("당신의 BMI는 : %lf입니다. \n", a / (b*b));
	return 0;
}