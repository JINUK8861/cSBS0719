#include <stdio.h>

void my_func(int num)
{
	printf("숫자 : %d 주소 : %p\n", num, &num);
	if (num == 5) {
		return;
	}
	my_func(num + 1);
	//num의 값이 5일때까지만 실행하는 조건
}

int main(void)
{
	my_func(1);

	return 0;
}