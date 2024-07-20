#include <stdio.h>

// 포인터와 const

void main()
{
	int a = 10;
	int b = 20;

	const int* p1 = &b;
	p1 = &a;					// 가리키는 변수 변경 가능
	//*p1 = 100;				// 역참조를 통한 값 쓰기 불가능
	printf("*p1 = %d \n", *p1); // 역참조를 통한 값 읽기 가능

	int* const p2 = &a;
	//p2 = &b;					// 가리키는 변수 변경 불가능
	*p2 = 100;					// 역참조를 통한 값 쓰기 가능
	printf("*p2 = %d \n", *p2); // 역참조를 통한 값 읽기 가능

	const int* const p3 = &a;
	//p3 = &b;					// 가리키는 변수 변경 불가능
	//*p3 = 200;				// 역참조를 통한 값 쓰기 불가능
	printf("*p3 = %d \n", *p3);	// 역참조를 통한 값 읽기 가능
}