#include <stdio.h>

void main()
{
	int n = 10;
	int k = 20;

	// n�� �����ּҸ� p�� �Ҵ�
	int* p = &n;

	// ������ ���� p�� �̿��ؼ�, 
	// n�� �������Ͽ� n�� ���簪�� 15�� �� ��
	*p += 15;

	// k�� ���� �ּҸ� p�� �Ҵ�
	p = &k;

	printf("*p�� %d \n", *p);
	printf("n�� %d \n", n);
	printf("k�� %d \n", k);
}