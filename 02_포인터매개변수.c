#include <stdio.h>

// 포인터 형식의 매개변수를 이용해서
// 배열을 처리하는 함수

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
