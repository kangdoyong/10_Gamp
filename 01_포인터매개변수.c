#include <stdio.h>

// 포인터를 이용하면, 함수에서 외부에 있는 데이터를
// 수정할 수 있게된다.

// variable에 addValue 값을 더하는 함수
void Add(int* variable, int addValue);

void main()
{
	int n = 10;

	Add(&n, 100);
	printf("n의 값은 %d \n", n);
}

void Add(int* variable, int addValue)
{
	*variable += addValue;
}
