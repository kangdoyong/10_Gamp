#include <stdio.h>

void main()
{
	// 배열은 데이터 타입이 동일한 변수를
	// 메모리에 연속적으로 할당하기 때문에
	// -> 첫번째 원소의 주소를 안다면
	//    모든 배열 원소에 접근할 수 있습니다.

	// 배열 (포인터 상수)
	// 가리키는 주소를 변경할 수 없습니다.

	// 배열식별자 myArray는 첫번째 원소의 주소를 가리킵니다.
	int myArray[] = { 1, 234, 235, 96, 122 };

	// 배열 변수를 포인터 변수에 대입할 경우
	// 동일하게 배열의 첫번째 원소의 주소를 갖으므로,
	// 포인터 변수를 통해 모든 원소에 접근할 수 있음
	int* pArray = myArray;

	int length = sizeof(myArray) / sizeof(myArray[0]);

	for (int i = 0; i < length; ++i)
	{
		printf("pArray[%d] = %d \n", i, pArray[i]);
	}

	printf("모든 원소의 주소\n");
	for (int i = 0; i < length; ++i)
	{
		printf("&myArray[%d] = %p \n", i, &myArray[i]);
	}

	// 주소와 정수를 연산할 경우
	// 주소 + 정수(인덱스) = 주소 + (인덱스 * sizeof(가리키는 자료형))
	for (int i = 0; i < length; ++i)
	{
		printf("myArray + %d = myArray + (%d * sizeof(int)) = %p \n",
			i, i, myArray + i);
	}

	// 주소 + 인덱스 연산 후, 역참조를 통해 배열 원소의 실제값에 접근할 수 있음
	for (int i = 0; i < length; ++i)
	{
		printf("myArray[%d] = %d \n", i, *(myArray + i));
	}
}