#include <stdio.h>

// ������ ������ �ּҸ� ������ �� ����
// ������ ������ �ּҸ� �Ϲ� ������ ������ ���� ���� ������
// ���������� ������ ������ ����Ű�� ����� ���� ����
// ������ �� ���Եȴ�.
// -> ������ ������ �ǹ̸� ����

void main()
{
	int num = 10;

	// num�� �޸� ���� �ּҸ� pNum�� ����Ű���� �մϴ�.
	int* pNum = &num;

	// pNum�� �޸� ���� �ּҸ� ppNum�� ����Ű���� �մϴ�.
	int** ppNum = &pNum;

	int*** pppNum = &ppNum;

	printf("&num = %p \n", &num);
	printf("*ppNum = %p \n", *ppNum);
	printf("**ppNum = %d \n", **ppNum);
}

