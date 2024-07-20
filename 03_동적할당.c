#include <stdio.h>
#include <stdlib.h>

void main()
{
	printf("몇 개의 정수를 출력할까요?\n");
	int printCnt;
	scanf("%d", &printCnt);

	printf("숫자 몇부터 출력시킬까요?\n");
	int startNumber;
	scanf("%d", &startNumber);

	int* pArray = (int*)calloc(printCnt, sizeof(int));
	// void* calloc(count, size) 
	// count * size 만큼 메모리 동적 할당
	// 0으로 초기화 시킨 후, 메모리 시작 주소를 void* 형식으로 반환

	for (int i = 0; i < printCnt; ++i)
	{
		pArray[i] = startNumber + i;

		printf("array[%d] = %d \n", i, pArray[i]);
	}

	free(pArray);
	pArray = NULL;
}