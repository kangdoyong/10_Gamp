#include <stdio.h>

// ������ ������ �Ű������� �̿��Ͽ�
// �Ķ���ͷ� ���� �� ������ ���� ���� �ڹٲٴ�
// Swap �Լ��� �ۼ�

// input
// a �Է� : 10
// b �Է� : 20

// output
// a : 20
// b : 10

void Swap(int* a, int* b);

void main()
{
	int a, b;
	printf("a �Է� : ");
	scanf("%d", &a);

	printf("b �Է� : ");
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
