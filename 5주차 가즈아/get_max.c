#include <stdio.h>
int get_max(int x, int y);

int main(void)
{
	int a, b;

	printf("�� ���� ������ �Է��Ͻÿ�:");
	scanf("%d %d", &a, &b);
	printf("�μ� �߿��� ū ���� %d�Դϴ�. \n", get_max(a, b));
	return 0;
}

int get_max(int x, int y)
{
	if (x > y) return(x);
	else return(y);
}