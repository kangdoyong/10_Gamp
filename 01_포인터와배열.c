#include <stdio.h>

void main()
{
	// �迭�� ������ Ÿ���� ������ ������
	// �޸𸮿� ���������� �Ҵ��ϱ� ������
	// -> ù��° ������ �ּҸ� �ȴٸ�
	//    ��� �迭 ���ҿ� ������ �� �ֽ��ϴ�.

	// �迭 (������ ���)
	// ����Ű�� �ּҸ� ������ �� �����ϴ�.

	// �迭�ĺ��� myArray�� ù��° ������ �ּҸ� ����ŵ�ϴ�.
	int myArray[] = { 1, 234, 235, 96, 122 };

	// �迭 ������ ������ ������ ������ ���
	// �����ϰ� �迭�� ù��° ������ �ּҸ� �����Ƿ�,
	// ������ ������ ���� ��� ���ҿ� ������ �� ����
	int* pArray = myArray;

	int length = sizeof(myArray) / sizeof(myArray[0]);

	for (int i = 0; i < length; ++i)
	{
		printf("pArray[%d] = %d \n", i, pArray[i]);
	}

	printf("��� ������ �ּ�\n");
	for (int i = 0; i < length; ++i)
	{
		printf("&myArray[%d] = %p \n", i, &myArray[i]);
	}

	// �ּҿ� ������ ������ ���
	// �ּ� + ����(�ε���) = �ּ� + (�ε��� * sizeof(����Ű�� �ڷ���))
	for (int i = 0; i < length; ++i)
	{
		printf("myArray + %d = myArray + (%d * sizeof(int)) = %p \n",
			i, i, myArray + i);
	}

	// �ּ� + �ε��� ���� ��, �������� ���� �迭 ������ �������� ������ �� ����
	for (int i = 0; i < length; ++i)
	{
		printf("myArray[%d] = %d \n", i, *(myArray + i));
	}
}