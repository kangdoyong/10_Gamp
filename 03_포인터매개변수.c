#include <stdio.h>

// 포인터 형식의 매개변수를 이용하여
// 파라미터로 받은 두 변수의 값을 서로 뒤바꾸는
// Swap 함수를 작성

// input
// a 입력 : 10
// b 입력 : 20

// output
// a : 20
// b : 10

void Swap(int* a, int* b);

void main()
{
	int a, b;
	printf("a 입력 : ");
	scanf("%d", &a);

	printf("b 입력 : ");
	scanf("%d", &b);

	Swap(&a, &b);

	printf("a = %d \n", a);
	printf("b = %d \n", b);
}

void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
