#include <stdio.h>

void my_func(int num)
{
	printf("���� : %d �ּ� : %p\n", num, &num);
	if (num == 5) {
		return;
	}
	my_func(num + 1);
	//num�� ���� 5�϶������� �����ϴ� ����
}

int main(void)
{
	my_func(1);

	return 0;
}