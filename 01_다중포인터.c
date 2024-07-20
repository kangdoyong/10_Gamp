#include <stdio.h>

// 포인터 변수의 주소를 저장할 수 있음
// 포인터 변수의 주소를 일반 포인터 변수가 가질 수는 있지만
// 실질적으로 포인터 변수가 가리키는 대상의 실제 값을
// 제어할 수 없게된다.
// -> 포인터 변수의 의미를 잃음

void main()
{
	int num = 10;

	// num의 메모리 시작 주소를 pNum이 가리키도록 합니다.
	int* pNum = &num;

	// pNum의 메모리 시작 주소를 ppNum이 가리키도록 합니다.
	int** ppNum = &pNum;

	int*** pppNum = &ppNum;

	printf("&num = %p \n", &num);
	printf("*ppNum = %p \n", *ppNum);
	printf("**ppNum = %d \n", **ppNum);
}

