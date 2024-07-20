#include <stdio.h>
#include <stdlib.h>

void main()
{
	// 현재 배열의 크기를 나타내는 변수
	int size = 0;
	// 동적할당한 배열의 시작 주소를 갖을 포인터 변수
	int* pArray = NULL;

	while (1)
	{
		// 할당한 데이터가 있다면 전부 출력
		if (size > 0)
		{
			printf("입력한 수 : ");
			for (int i = 0; i < size; ++i)
				printf("%d ", pArray[i]);
			printf("\n");
		}

		printf("정수 입력 (종료 : -1) : ");
		int input;
		scanf("%d", &input);

		if (input == -1)
			break;
		else
		{
			// 데이터를 추가 할당할 것이므로,
			// 배열 사이즈를 증가
			++size;

			// pArray가 유효한지?
			// 유효하다면(메모리 주소가 들어있다면)
			// -> 이전에 메모리를 할당한 적이 있다라는 뜻
			// 유효하지 않다면 (NULL 이라면)
			// -> 아직 할당을 한 적이 없다는 뜻(메모리 최초 할당)

			pArray = pArray ? (int*)realloc(pArray, size * sizeof(int)) : (int*)malloc(sizeof(int));

			// void* realloc(block, size) : block가 가리키는 메모리 영역의 크기를
			// size 바이트의 크기로 재할당
			// 재할당으로 공간을 늘렸을 때
			// 재할당 전에 입력한 값을 유지되며, 새로 추가된 메모리에는 쓰레기값이 저장되어 있습니다.
			// 재할당으로 공간을 줄였을 때
			// 입력된 데이터는 사라질 수 있음
			// 재할당 과정에서 메모리의 위치가 바뀔 수 있으므로,
			// 항상 realloc 함수의 반환 값을 포인터 변수로 다시 받아 사용해야 함

			// 입력한 값을 할당한 메모리에 대입
			pArray[size - 1] = input;
		}
	}

	free(pArray);
	pArray = NULL;
}