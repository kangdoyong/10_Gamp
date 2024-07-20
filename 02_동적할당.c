#include <stdio.h>
#include <stdlib.h>

// �迭�� ���Ҹ� �ʱ�ȭ�ϴ� �Լ�
void InitArray(int* arr, int length);

// �迭�� ��� ���Ҹ� ����ϴ� �Լ�
void PrintArray(int* arr, int length);

void main()
{
	// ���̰� 10�� int�� �迭 
	int* pArr = (int*)malloc(sizeof(int) * 10);
	// 40����Ʈ�� �޸� �Ҵ� ��, ���ӵ� ������ �Ҵ��ϹǷ�
	// ���ӵ� �ּҸ� ���� �� -> ���, �迭ó�� ����� �� ����

	InitArray(pArr, 10);

	PrintArray(pArr, 10);

	for (int i = 0; i < 10; ++i)
		pArr[i] = i * 10;

	PrintArray(pArr, 10);

	// ����� ���� ��, �޸� ����
	free(pArr);
	pArr = NULL;
}

void InitArray(int* arr, int length)
{
	for (int i = 0; i < length; ++i)
		arr[i] = 0;
}

void PrintArray(int* arr, int length)
{
	for (int i = 0; i < length; ++i)
		printf("arr[%d] = %d \n", i, *(arr + i));
}