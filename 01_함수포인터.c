#include <stdio.h>

// 함수 포인터란?
// 함수 식별자(이름)은 함수가 있는 메모리 주소이며,
// 이러한 함수를 대입하여 호출할 함수를
// 가리키는 포인터 변수를 의미함

void PrintHello();

void main()
{
	// 함수 포인터를 선언
	// [가리킬 함수의 반환 타입] [*함수포인터이름][(가리킬 함수의 매개변수 목록)] = 가르킬 함수의 이름;
	void (*myFuncPointer)() = PrintHello;

	// 함수 포인터가 가리키는 함수를 호출
	// 함수포인터식별자(파라미터가 존재한다면 인자를 전달);
	myFuncPointer();
}

void PrintHello()
{
	printf("Hello! \n");
}
