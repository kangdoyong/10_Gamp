#include <stdio.h>

// ������ ������ �Ű������� �̿��ؼ�
// �迭�� ó���ϴ� �Լ�

void PrintArray(int* arr, int length);

void main()
{
	int arr[] = { 1, 2, 3, 4, 5};

	PrintArray(arr, sizeof(arr) / sizeof(arr[0]));
}

void InitArray(int* arr, int length)
{
}

void PrintArray(int* arr, int length)
{
	for (int i = 0; i < length; ++i)
	{
		printf("arr[%d] = %d \n", i, arr[i]);
	}
}
