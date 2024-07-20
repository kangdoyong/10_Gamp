#include <stdio.h>
#include <stdlib.h>

// 배열의 원소를 초기화하는 함수
void InitArray(int* arr, int length);

// 배열의 모든 원소를 출력하는 함수
void PrintArray(int* arr, int length);

void main()
{
	// 길이가 10인 int형 배열 
	int* pArr = (int*)malloc(sizeof(int) * 10);
	// 40바이트의 메모리 할당 시, 연속된 공간에 할당하므로
	// 연속된 주소를 갖게 됨 -> 결과, 배열처럼 사용할 수 있음

	InitArray(pArr, 10);

	PrintArray(pArr, 10);

	for (int i = 0; i < 10; ++i)
		pArr[i] = i * 10;

	PrintArray(pArr, 10);

	// 사용이 끝난 후, 메모리 해제
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