#include <stdio.h>

int main()
{
	double a, b;
	printf("�����Ը� �Է��ϼ���(kg) : ");
	scanf("%lf", &a);
	printf("Ű�� �Է��ϼ���(m) : ");
	scanf("%lf", &b);
	printf("����� BMI�� : %lf�Դϴ�. \n", a / (b*b));
	return 0;
}