#include <stdio.h>

// �����͸� �̿��ϸ�, �Լ����� �ܺο� �ִ� �����͸�
// ������ �� �ְԵȴ�.

// variable�� addValue ���� ���ϴ� �Լ�
void Add(int* variable, int addValue);

void main()
{
	int n = 10;

	Add(&n, 100);
	printf("n�� ���� %d \n", n);
}

void Add(int* variable, int addValue)
{
	*variable += addValue;
}
